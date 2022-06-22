#include<iostream>
using namespace std;
class test
{
int code;
static int count;
static int cod;
public:
	void normal()
	{
		cout<<"code is :"<<cod<<endl;
		cout<<"count is :"<<count<<endl;
	}
	static void freeze()
	{
cout<<"code is :"<<cod<<endl;
cout<<"static is :"<<count<<endl;
	}

};
int test::count;
int test::cod;
int main()
{
	test c;

	c.normal();
	test::freeze(); /////////// static memeber function acces using one way
	c.freeze();////////static access using another way 




}