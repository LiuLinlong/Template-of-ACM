#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main(){
	int r;
	scanf("%d",&r);
	double pi=acos(-1);
	double ans=pi*r*r;
	printf("%.7f",ans);
	return 0;
}
