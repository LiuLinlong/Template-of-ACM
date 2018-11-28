#include<bits/stdc++.h>
using namespace std;
double exp(){//读入一个（逆）波兰表达式，并计算其值 
	char a[100];//随意开数组 
	cin>>a;
	swich(a[[0]]){
		case('+'):return exp()+exp();
		case('-'):return exp()-exp();
		case('*'):return exp()*exp();
		case('/'):return exp()/exp();
		default: return atof(a);//atof可以把一个字符串形式的浮点数转化成double形式的 
		break;
	} 
}
int main(){
	printf("%lf",exp());
	return 0;
}
