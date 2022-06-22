#include<iostream>
using namespace std;
class y;
class x
{
	int a;
public:
	void setvalue(int X)
	{
		a=X;
	}
	friend void sum(x,y);
};
class y
{
	int a;
public:
	void setvalue(int Y)
	{
		a=Y;
     
	}
	friend void sum(x,y);
};
void sum(x X,y Y )
{
	cout<<"Total is :"<<X.a+Y.a<<endl; 
	
}
int main()
{
	x one;
	y second;
	one.setvalue(10);
	second.setvalue(10);

	sum(one,second);
	return 0;
}