#include<bits/stdc++.h>
using namespace std;
	double eps = 1e-6;
	double f(double x){
		return x*x*x - 5*x*x + 10*x - 80
	}//函数表达式
int main(){
	double a,x1 = 0, x2 = 100,y;//x1，x2为区间左右端点 
	a = x1+(x2-x1)/2;
	int triedtimes = 1;//尝试次数 
	y = f(a);
	while( fabs(y) > eps){
		if( y > 0) x2 = a;
		else x1 = a;
		a = x1+(x2 - x1)/2;
		y = f(a);
		triedtimes ++;
	}
	printf("%.8f\n",a);
	printf("%d",triedtimes);
	return 0; 
