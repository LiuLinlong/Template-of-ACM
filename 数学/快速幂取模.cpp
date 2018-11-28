#include<iostream>
using namespace std;
int PowMod(long long a, long long b, long long c)
{
    long long ans = 1;
    a %= c;
    while (b)
    {
        if (b & 1)
            ans = (ans * a) % c;
        a =  (a * a) % c;
        b >>= 1;
    }
    return ans;
}
