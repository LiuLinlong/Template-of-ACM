long long f(long long n,long long m)
{
    long long ans=1;
    long long t=1;
    if(m==0||n==m) return 1;
    long long z=min(m,n-m);
    for(long long i=1; i<=z; i++)
    {
        ans=t*(n-i+1)/(i);
        t=ans;
    }
    return ans;
}
