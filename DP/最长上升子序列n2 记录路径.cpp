#include <bits/stdc++.h>

using namespace std;

struct LIS
{
    int s, pre, dp = 1;
} arr[20];
int ans[20];
int main()
{
    for(int i=0; i<6; i++)
    {
        cin>>arr[i].s;
    }
    int maxx = 0, pos;
    for(int i = 0; i < 6; i++)
    {
        maxx=0;//pos用来记录最长递增子序列的末尾数字下标
        for(int j = 0; j < i; j++)
        {
            if(arr[j].s < arr[i].s && arr[j].dp + 1 > arr[i].dp)
            {
                arr[i].dp = arr[j].dp + 1;
                arr[i].pre = j;
                if(maxx < arr[i].dp)
                {
                    maxx = arr[i].dp;
                    pos = i;//更新pos
                    //cout << pos << endl;
                }
            }
        }
    }
    //cout<<arr[pos].s<<" ";
    for(int i=maxx - 1; i>=0; i--)
    {
        ans[i]=arr[pos].s;
        pos=arr[pos].pre;

    }
    for(int i=0;i<maxx-1;i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<ans[maxx-1]<<endl;
    return 0;
}
