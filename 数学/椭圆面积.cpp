#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main(){
	int c,j,k;
	double a,b;
	scanf("%d%d%d",&c,&j,&k);
	if(j>=k){
		printf("0.000");
	}
	else{
	a=(double)k*(double)c/(double)j;
	b=a*a-c*c;
	b=sqrt(b);
	int pi=acos(-1); 
	double s=pi*a*b;
	printf("%.3lf",s);	
	}
	return 0;
} 
