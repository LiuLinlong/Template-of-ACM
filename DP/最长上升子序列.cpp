#include<bits/stdc++.h>
using namespace std;
const int MAXN =1010;//������
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
    {//ÿ�����Ե�i����Ϊ�յ������������еĳ���
        for(int j = 1; j < i; j++)//�鿴�Ե�j����Ϊ�յ�������������
            if(a[i] > a[j])
                maxlen[i] = max(maxlen[i],maxlen[j]+1);
    }
    cout << *max_element(maxlen+1,maxlen + n + 1);//ȡ���ֵ���
    return 0;
}
