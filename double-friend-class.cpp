#include<iostream>
using namespace std;
class second;
class one {
	int a;
  public:
	void setvalue(int x)
	{
		a=x;

	}

	friend void sum(one,second);
};
class second
{
	int a;
public:
void setvalue(int x)
{
	a=x;
}
	friend void sum(one,second);
};
void sum(one o,second s)
{
	cout<<"sum of two number from different classes is "<<o.a+s.a<<endl;
}
int main()
{
	one A;
	second B;
	A.setvalue(10);
	B.setvalue(20);
	sum(A,B);///////////calling friend function
	return 0;
} 