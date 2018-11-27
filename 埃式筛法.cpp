#include<bits/stdc++.h>
using namespace std;
int is[10000];
int isprime(int n)
{
    int tot = 0;
    for(int i = 0; i <= n; i++)
        is[i] = true;
    is[0] = is[1] = 0;
    for(int i = 2; i <= n; i++)
    {
        if(is[i])
        {
            is[tot++] = i;
            for(int j = 2 * i; j <= n; j += i)
                is[j] = 0;
        }
    }
    return tot;
}
int main()
{
    int n;
    while(cin >> n){
        cout << isprime(n) << endl;
    }
    return 0;
}
