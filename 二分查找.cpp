#include<bits/stdc++.h>
using namespace std;
int binaryserch(int a[],int size,int p){//包含size个元素，从小到大排序的int数组中查找p 
	int l = 0;//查找区间的左端点 
	int r = size -1;//查找区间的右端点 
	while(l <= r){//如果查找区间不为空就继续查找 
		int mid = l+(r-l)/2;//取查找区间正中元素下标 
		if(p == a[mid])
		    return mid;
	    else if(p > a[mid])
		l = mid + 1;//设置新的查找区间左端点 
		else r = mid - 1; //设置新的查找区间右端点 
	}
	return -1;//表示找不到 
}
int lowerbound(int a[],int size,int p){
	int l = 0;//查找区间的左端点
	int r = size-1;//查找区间的右端点
	int laspos = -1;//到目前为止最优解 
	while(l <= r){//如果查找区间不为空就继续查找
		int mid = l+(r-l)/2;//取查找区间正中元素下标 
		if(a[mid] >= p) r = mid - 1;
		else{
			lastpos = mid;
			l = mid+1;
		}
	}
	return lastpos;
} 
