#include<bits/stdc++.h>
using namespace std;
double exp(){//����һ�����棩�������ʽ����������ֵ 
	char a[100];//���⿪���� 
	cin>>a;
	swich(a[[0]]){
		case('+'):return exp()+exp();
		case('-'):return exp()-exp();
		case('*'):return exp()*exp();
		case('/'):return exp()/exp();
		default: return atof(a);//atof���԰�һ���ַ�����ʽ�ĸ�����ת����double��ʽ�� 
		break;
	} 
}
int main(){
	printf("%lf",exp());
	return 0;
}
