# QUEUE

**FIFO**

```c++
#include <queue>
queue<int>qu;// queue<元素类型>队列名
qu.size();//队列大小
qu.empty();//队列是否为空，返回值为bool型
qu.push();//向队列中存元素
/*
qu.push(4);
qu.push(133);
qu.push(23);
此时 qu.size()为3
*/
qu.front();//队头元素的值
qu.back();//队尾元素的值
qu.pop();//队头元素出队
/***********WRITTEN BY LLL***************/
/*
while(!qu.empty())
{
    cout<<q.front()<<" ";
    q.pop();
}
*/
```



# STACK

**FILO**(first in last out)

```c++
#include<stack>
stack<int>st;//栈的声明
st.size();
st.empty();
st.top();
/**********************WRITTEN BY LLL********************/
/*手写遍历*/

```



# VECTOR//向量

可变大小的数组

可采用下标对vector的元素进行访问；

```c++
#include<vector>
vector<int>vec;
vec.size();
vec.empty();
//vec[0],vec[1];
vec.push_back();//末尾添加元素
vec.pop_back();//末尾删除元素
vector <int>::iterator iter;
vec.begin();
vec.end();

//遍历
for(iter=vec.begin();iter!=vec.end();iter++){
    cout<< *iter <<endl;
}
vec.resize(大小);//重新设置大小
vec.erase(参数);//参数是一个迭代器，直接消失。
vec.insert(位置,数据);//向那个位置的前面插入元素data

//交换
vector<int>ve;
vec.swap(ve);//把ve和vec里元素交换

//元素翻转,reverse不是vector特有的成员函数
reverse(vec.begin(),vec.end());//左闭右开

string str="abcbagbhjknskhinkc";
reverse(str.begin(),str.end());//string用begin end
char a[100]="asd";
reverse(str,str+3);//数组用下标+-做

vec.clear();//清空整个向量  ？赋值0还是释放了空间？
```



# MAP//映射

提供1V1的映射

```c++
map<int,string>mp;
mp.insert(make_pair<int,string>(1,"student_one"));
mp["hhh"]=5;
int t=mp.size();
mp["heheda"]=17;
map<string,int>::iterator iter;
for(iter=mp.begin();iter!=mp.end();iter++){
    cout<<iter->first<<" "<<iter->second<<endl;//按照字典序排序
}
//用下标覆盖？？
cout<<mp.count("heheda")<<endl;//结果为1，那heheda出现过了1次。即heheda出现的次数
iter=mp.find("hhh");
mp.erase(iter);
mp.clear();
```



# PAIR

```c++
pair<int,int>k;
k.first=1;
k.second=2;
```



# SET//集合

已经从小到大排列好了的集合（互斥性）

```c++
set<int>st;//不能用下标，只能用迭代器访问
begin();
end();
clear();
empty();
size();
/*需要迭代器承载or做参数
find();
erase();
*/
//用insert来插入
st.insert(data);
set<int>::iterator iter;
//遍历
for(iter=st.begin();iter!=st.end();iter++){
    cout<<*iter<<endl;
}
cout<<st.size();
iter=st.find(10);
st.erase(iter);
count();//count返回出现次数，set只能是否出现过，multiset是次数
/*课后了解 结构体的时候实现map排的方式*/
```



# 双端队列&优先队列

```c++
dequeue<int> dq;
dp.front_push();
dp.back_push();
priority_queue<int>q; //实时操作，nlgn
q.top();
```





