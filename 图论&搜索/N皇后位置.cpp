#include<bits/stdc++.h>
using namespace std;
int queenpos[100];//�����õĻʺ�λ�á����Ͻ�Ϊ��0,0��
int n;
void nqueen(int k) {//��0~k-1�лʺ��Ѿ��ںõ�����£��ڵ�k�м����Ļʺ�
	if (k == n) {//n���ʺ��Ѿ��ں�
		for (int i = 0; i<n; i++)
			cout << queenpos[i] + 1 << " ";
		cout << endl;
		return;
	}
	for (int i = 0; i < n; i++) {//������Ե�k���ʺ�λ��
		int spot = 1;//�������j��iλ���Ƿ����Ҫ��
		for (int j = 0; j < k; j++) {//���Ѿ��ںõ�k���ʺ��λ�ñȽϣ����Ƿ��ͻ
			if (queenpos[j] == i || abs(queenpos[j] - i) == abs(k - j)) {
				spot = 0;//������Ҫ�󣬽��б�ǲ�����
				break;
			}
		}
		if (spot) {//��ǰѡ��λ��i����ͻ
			queenpos[k] = i;//����k���ʺ����λ��i
			nqueen(k + 1);
		}
	}
}
int main() {
	cin >> n;
	nqueen(0);//�ӵ�0�аڻʺ�
	return 0;
}

