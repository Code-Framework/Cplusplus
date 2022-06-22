#include<iostream>
using namespace std;

class example
{
	int X;
	int Y;
public:
	example(){} //<----- must include this ///////No argument constructor
	example(float a)
	{
		X=Y=a;
	} ///////one argument constructor
	example(int a, int b)
	{
X=a;
Y=b;
	}
	//////Two argument constructor

	friend example putter(example , example ); //////this wil return object
	friend void show(example);   ///////This will show values
};
example putter(example e1, example e2)

{
	example e3;
	e3.X=e1.X+e2.X;
	e3.Y=e1.Y+e2.Y;
	return (e3);
}
void show(example ok)
{
	cout<<"x is :"<<ok.X<<endl;
	cout<<"y is :"<<ok.Y<<endl;
}
int main()
{
	example s1,s2,s3;
	s1=example(10.5);
	s2=example(10,15);
	s3=putter(s1,s2);

	show(s1);
	show(s2);
	show(s3);
	return 0;
}