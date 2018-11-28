#include<bits/stdc++.h>
using namespace std;
int term_value();
int expression_value();
int factor_value();
int expression_value(){//读入一个表达式并返回它的值
	int result = term_value();//求第一项的值 
	bool more = true;
	while(more){
		char op = cin.peek();//cin.peek()看一个字符，不取走 
		if( op == '+' || op == '-' ){
			cin.get();//从输入中取走一个字符
			int value = term_value();
			if( op == '+' ) result += value;
			else result -= value;
		}
		else more = false;
	}
	return result;
}
int term_value(){//读入一个项并返回它的值
	int result = factor_value();//求第一个因子的值 
	while(true){
		char op = cin.peek();
		if( op == '*' || op == '/'){
			cin.get();
			int value = factor_value();
			if( op == '*') result *= value;
			else result /= value;
		}
		else break;
	}
	return result;
}
int factor_value(){//读入一个因子并返回它的值 
	int result = 0;
	char c = cin.peek();
	if( c == '('){
		cin.get();//去掉左括号 
		result = expression_value();
		cin.get();//去掉右括号 
	}
	else{
		while(isdigit(c)){//isdigit(c)读到一个数字字符 
			result = 10 * result + c - '0';
			cin.get();
			c = cin.peek();
		}
	}
	return result;
}
int main(){
	cout << expression_value() << endl;
	return 0;
} 
