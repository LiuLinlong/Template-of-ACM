# 快速幂

## 前缀铺垫

**取模相关：**

a>b时，a=kb+r （0≤r＜b）

a%p

b%p

**(a+b)%p=((a%p)+(b%p))%p**

**证明**

**(a+b)%p**=(k1p+r1+k2p+r2)%p=(r1+r2)%p r1=a%p r2=b%p

**(a\*b)%p=((a%p)\*(b%p))%p**

**(a-b)%p=((a%p)-(b%p)+p)%p**

## 快速幂（模重复平方算法）

### 前提

1. pow(a,b)=pow(a,b1+b2)=pow(a,b1)*pow(a,b2)

2. 二进制（二分）

   pow(a,b)=pow(a,pow(2,k))

**根本：把b分解为二进制 然后为1的为就是a的2的（位数-1）次方**

## 代码

```cpp
int qm(int a,int b){
    int ans=1;
    while(b){
        if(b%2==1)
        {
            ans*=a;
        }
        a*=a;
        b/=2;
        }
    return ans;
}
```

**快速幂取模**

```c++
int qm(int a,int b,int mod){
    int ans=1;
    a=a%mod;
    while(b){
        if(b&1)
        {
            ans=ans*a%mod;
        }
        a=a*a%mod;
        b>>1;
        }
    return ans%mod;
}
```

**取模运算优先级等同于乘除运算**

# 素数判定

== 1不是素数 ==

**打表实现O(1)访问**

## 埃拉托尼斯筛法

**O(nlgn)**

筛去所有2-sqrt(n)中素数（未被标记）的本身以后的所有倍数

缺点：合数会被多次筛去，因此时间复杂度不是很完美

```c++
//tot素数个数
int tot;
bool is[maxn];//maxn个元素记录是否为素数
int pri[maxn];//prime素数
void Eratosthenes(){
    tot=0;
    memset(is,1,sizeof(is));//初始化标记都为素数，memset按照二进制位赋值,但是不是0就认为是true
    is[0]=is[1]=0；
        for(int i=2;i<maxn;i++){
            if(is[i]){
                pri[++tot]=i;
                for(int j=i+i;j<maxn;j+=i){
                    is[j]=0;
                }
            }
        }
}
```



## 线性筛

**O(lgn)**

所有的合数都被它最小的质因数筛过一次

```c++
for (int i = 2; i < N; i++)
{
    if (is[i])
    {
        pri[++tot] = i;
        phi[i] = i-1;
        mu[i] = -1;
        e[i] = 1;
        d[i] = 2;
        fac[i] = i;
    }
    for (int j = 1; j <= tot && pri[j]*i < N; j++)
    {
        is[pri[j]*i] = 0;
        if (i % pri[j] == 0)
        {
            phi[i*pri[j]] = phi[i]*pri[j];
            mu[i*pri[j]] = 0;
            d[pri[j]*i] = d[i]/(e[i]+1)*(e[i]+2);
            e[pri[j]*i] = e[i]+1;
            fac[i*pri[j]] = fac[i]*pri[j];
            break;
        }
        else
        {
            mu[i*pri[j]] = -mu[i];
            phi[i*pri[j]] = phi[i]*(pri[j]-1);
            e[pri[j]*i] = 1;
            d[pri[j]*i] = d[i]*d[pri[j]];
            fac[i*pri[j]] = pri[j];
        }
    }
}
   
```





## 欧拉筛

**O(n)**



# 分解质因数

## 朴素算法

```c++


```

