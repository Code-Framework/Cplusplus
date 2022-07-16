#include<iostream>
using namespace std;
class a{
	int x=1;
	public :
	void display()
	{
		cout<<x<<endl;

	}
};
class b{
	int y=2;
	public :
	void display()
	{
		cout<<y<<endl;
		
	}
};
class c:public a, public b{
public:
	int c=3;
	void display()
	{
		a::display();
	};
};
int main(int argc, char const *argv[])
{
	c run;
run.c::display();

	return 0;
}
