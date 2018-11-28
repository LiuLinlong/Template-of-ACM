#include <iostream>  
#include <cstdio>  
using namespace std;  
int n,a[50];  
int main(){  
    scanf("%d",&n);  
    a[1]=2;              
    for(int i=2;i<=n;i++){  
        int c=0;                   
        for(int j=1;j<=20;j++){  
			a[j]=a[j]*2+c;      
	        if(j==1){
	        	a[j]+=2;  
	        }
	        c=a[j]/10000;       
	        a[j]%=10000;        
        }  
    }  
    int i=20;  
    while(i>1&&!a[i]) 
	      i--;   
    printf("%d",a[i]);                
    while(--i)  
          printf("%04d",a[i]);     
    return 0;  
}
