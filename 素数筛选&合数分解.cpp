/**********************Written By LLL**********************/
const int maxn=10000;
int prime[maxn+1];
void getprime()//prime[0]==素数的个数;
{
    memset(prime,0,sizeof(prime));
    for(int i=2; i<=maxn; i++)
    {
        if(!prime[i])
            prime[++prime[0]]=i;
        for(int j=1; j<=prime[0]&&prime[j]<=maxn/i; j++)
        {
            prime[prime[j]*i]=1;
            if(i%prime[j]==0)
                break;
        }
    }
}
long long factor[100][2];
int fatCnt;
int getFactors(long long x)//factor[第几+1个质因子][0]=质因子; factor[第几+1个质因子][1]=此因子的几次方;
{
    fatCnt=0;
    long long tmp=x;
    for(int i=1; prime[i]<=tmp/prime[i]; i++)
    {
        factor[fatCnt][1]=0;
        if(tmp%prime[i]==0)
        {
            factor[fatCnt][0]=prime[i];
            while(tmp%prime[i]==0)
            {
                factor[fatCnt][1]++;
                tmp/=prime[i];
            }
            fatCnt++;
        }
    }
    if(tmp!=1)
    {
        factor[fatCnt][0]=tmp;
        factor[fatCnt++][1]=1;//此时自加后，fatCnt真的变成了个数
    }
    return fatCnt;
}
