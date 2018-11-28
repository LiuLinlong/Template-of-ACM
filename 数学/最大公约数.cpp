#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b){
	int c = a % b;
	return c == 0 ? b : gcd(b,c);
}
int main(){
	int a,b;
	cin >> a >> b;
	cout << gcd(a,b);
	return 0;
}
