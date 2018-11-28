#include<bits/stdc++.h>
using namespace std;
const int MAXN =1010;//依题意
int a[MAXN];
int maxlen[MAXN];
int main()
{
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
        maxlen[i] = 1;
    }
    for(int i = 2; i <= n; i++)
    {//每次求以第i个数为终点的最长上升子序列的长度
        for(int j = 1; j < i; j++)//查看以第j个数为终点的最长上升子序列
            if(a[i] > a[j])
                maxlen[i] = max(maxlen[i],maxlen[j]+1);
    }
    cout << *max_element(maxlen+1,maxlen + n + 1);//取最大值输出
    return 0;
}
