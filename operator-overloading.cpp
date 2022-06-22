#include<iostream>
using namespace std;

class example
{
	int x;
	int y;
	int z;
	public:
	void getdata(int ,int ,int );
	void display();
	void operator-();
};
void example::getdata(int a,int b,int c)
{
	x=a;
	y=b;
	z=c;
}
void example::display()
{
	cout<<"x is :"<<x<<endl;
	cout<<"y is :"<<y<<endl;
	cout<<"z is :"<<z<<endl;
}
void example::operator-()
{
	x = -x;
	y = -y;
	z = -z;
}
int main()
{
	example o;
	o.getdata(10,10,100);
	// o.display(); 
	int gg=10 - 5;
	cout<<gg;
	-o;
	// o.display();

	return 0;
}