#include<iostream>
using namespace std;
 
class test 
{
public:
	test()
	{
		cout<<"Constructor called"<<endl;

	}
	~test()
	{
		cout<<"Dconstructor called"<<endl;
	}
};
int main()
{
	test t;
	int* ptr=new int(10);
	cout<<"Memory is ---->:"<<*(ptr)<<endl;
	delete ptr;
	cout<<"Memory is ---->:"<<*(ptr)<<endl;
	return 0;
}
