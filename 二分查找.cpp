#include<bits/stdc++.h>
using namespace std;
int binaryserch(int a[],int size,int p){//����size��Ԫ�أ���С���������int�����в���p 
	int l = 0;//�����������˵� 
	int r = size -1;//����������Ҷ˵� 
	while(l <= r){//����������䲻Ϊ�վͼ������� 
		int mid = l+(r-l)/2;//ȡ������������Ԫ���±� 
		if(p == a[mid])
		    return mid;
	    else if(p > a[mid])
		l = mid + 1;//�����µĲ���������˵� 
		else r = mid - 1; //�����µĲ��������Ҷ˵� 
	}
	return -1;//��ʾ�Ҳ��� 
}
int lowerbound(int a[],int size,int p){
	int l = 0;//�����������˵�
	int r = size-1;//����������Ҷ˵�
	int laspos = -1;//��ĿǰΪֹ���Ž� 
	while(l <= r){//����������䲻Ϊ�վͼ�������
		int mid = l+(r-l)/2;//ȡ������������Ԫ���±� 
		if(a[mid] >= p) r = mid - 1;
		else{
			lastpos = mid;
			l = mid+1;
		}
	}
	return lastpos;
} 
