#include<iostream>
using namespace std;

class example
{
	int X;
	int Y;
public:
	void geter()
	{
		cout<<"value of x is :"<<X<<endl;
		cout<<"value of x is :"<<Y<<endl;
	}
example(int x,int y);
};
example::example(int x, int y)
{
	X=x;
	Y=y;
}

int main()
{
	example ex(1,10); //implicit call to constructor
	ex.geter();//calling function ;
	
	// example ex=example(1,10); //explicit call to constructor
	return 0;
}