#include<iostream>
using namespace std;
class class_2;
class class_1{
	int a;
public:
	void setvalue(int x){a=x;}
	void printvalue(){cout<<"now a is :"<<a<<endl;}
	friend void swap(class_1 &,class_2 &);
};
class class_2
{
	int b;
public:
	void setvalue(int x){b=x;}
	void printvalue(){cout<<"now b is :"<<b<<endl;}
	friend void swap(class_1 &,class_2 &);
};
void swap(class_1 &x,class_2 &y)
{
	int temp=x.a;
	x.a=y.b;
	y.b=temp;
}
int main()
{
	#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
	class_1 a;
	class_2 b;
	a.setvalue(10);
	b.setvalue(20);
	swap(a,b);
	a.printvalue();
	b.printvalue();	
	return 0;

}