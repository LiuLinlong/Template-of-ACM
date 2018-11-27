#include<cmath>
#include<iostream>
using namespace std;
int queenpos[100];
int n,a;
int nqueen(int k)
{
    if (k == n)
        a++;
    for (int i = 0; i<n; i++)
    {
        int spot = 1;
        for (int j = 0; j< k; j++)
        {
            if (queenpos[j] == i || abs(queenpos[j] - i) == abs(k - j))
            {
                spot = 0;
                break;
            }
        }
        if (spot)
        {
            queenpos[k] = i;
            nqueen(k + 1);
        }
    }
    return a;
}
int main()
{
    while(cin >> n && n != 0)
    {
        nqueen(0);
        cout << a << endl;
        a = 0;
    }
    return 0;
}
