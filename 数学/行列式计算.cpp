#include<bits/stdc++.h>
using namespace std;
	/*aΪ����ʽ��nΪ����ʽ�Ľ�*/	
	  int f(int **a,int n){
	  int i,j,k;
	  int len;/*������ʽ�Ľ�*/
	  int s=0;
	  len = n-1;
	/*���ն��壬��ʼ��һ��������ʽ����Ŀռ�*/
	  int **p = (int **)malloc(sizeof(int *)*len);
	  for(i=0;i<len;i++)
	  p[i] = (int *)malloc(sizeof(int)*len);
	/*��Ϊ1�����ն������*/
	  if( 1==n )
	  return a[0][0];
	  for( k=0; k<n; k++)
	{
	  for(i=0;i<len;i++)
	  for(j=0;j<len;j++){
	      if(i<k)
	      p[i][j] = a[i][j+1];/*��ʼ��������ʽ��ֵ*/
	      if(i>=k)
	      p[i][j] = a[i+1][j+1];
	}
	  	s += (int)pow(-1,k) * a[k][0]* f(p,len);/*�ݹ����*/
	}
	for(i=0;i<len;i++) free(*(p+i));
	free(p);
	return s;
	}
	int main()
	{
	int i,j,n;
	printf("���������");
	scanf("%d",&n);
	int a[n][n];
	int **p = (int **)malloc(sizeof(int *)*n);//����ռ�
	printf("��������ʽ��");
	for(i=0;i<n;i++)
	{
	for(j=0;j<n;j++)
	scanf("%d",&a[i][j]);
	}
	for(i=0;i<n;i++)
	p[i] = a[i];
	printf("%d",f(p,n));//���ú���
	free(p);
	system("pause");
	}
	 
