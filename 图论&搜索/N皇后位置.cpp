#include<bits/stdc++.h>
using namespace std;
int queenpos[100];//存放算好的皇后位置。右上角为（0,0）
int n;
void nqueen(int k) {//在0~k-1行皇后已经摆好的情况下，摆第k行及其后的皇后
	if (k == n) {//n个皇后已经摆好
		for (int i = 0; i<n; i++)
			cout << queenpos[i] + 1 << " ";
		cout << endl;
		return;
	}
	for (int i = 0; i < n; i++) {//逐个尝试第k个皇后位置
		int spot = 1;//代表放在j行i位置是否符合要求
		for (int j = 0; j < k; j++) {//和已经摆好的k个皇后的位置比较，看是否冲突
			if (queenpos[j] == i || abs(queenpos[j] - i) == abs(k - j)) {
				spot = 0;//不符合要求，进行标记并跳出
				break;
			}
		}
		if (spot) {//当前选的位置i不冲突
			queenpos[k] = i;//将第k个皇后摆在位置i
			nqueen(k + 1);
		}
	}
}
int main() {
	cin >> n;
	nqueen(0);//从第0行摆皇后
	return 0;
}

