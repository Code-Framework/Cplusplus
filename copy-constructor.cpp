#include<iostream>
using namespace std;
class example
{
	int x;
public:

example(){}
example(int a)
{
	x=a;
}
/////////////////////////copy- constructor///////////
example(example &a)/////////////////////////////////
{//////////////////////////////////////////////////
	x=a.x;////////////////////////////////////////
}////////////////////////////////////////////////////
////////////////////////copy constructor/////////////
void display()
{
	cout<<"x"<<x;
}
};
int main()
{
	example a(20);
	example copy(100);
	example b(a);
	example c;
	c=copy;
	c.display();
	b.display();
	return 0;
}