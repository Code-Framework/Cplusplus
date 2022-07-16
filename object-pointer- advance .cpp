#include<iostream>
using namespace std;
class grandfather{
	
public:
	int a=10;
	void show()
	{
		cout<<"a is :"<<a<<endl;
	}
};
class father:public grandfather
{

public:
	public:
	int c;

	void show()
	{
cout<<"c is :"<<c<<endl;
	}
};
int main(int argc, char const *argv[])
{
	grandfather *gptr;
	grandfather me;
	gptr=&me;

	father obj;
	gptr=&obj;
	((father *)gptr)->c=500;
	((father *)gptr)->show();
	return 0;
}