#include<iostream>
using namespace std;
class alpha
{
	int a;
public:////////////////////////this constructor 
//////////////will give value to parent classes
	alpha(int i)
	{
		a=i;
	}
	void display()
	{
		cout<<"alpha.a is :"<<a<<endl;
	}
};
class beta
{
	int b;
public:
	beta(int i)
	{
		b=i;

	}
	void display()
	{
		cout<<"beta.b is :"<<b<<endl;
}
};

class gama :public alpha ,public beta
{
	int x;
public:
	gama(int a,int b,int c):alpha(a),beta(b)
	{ 
	x=c;
	}
	void display()
	{
		cout<<"gama.x is :"<<x<<endl;

}
};

int main(int argc, char const *argv[])
{
	#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
	gama g(20,40,50);
    g.beta::display();
	g.alpha::display();
	g.gama::display();
	return 0;
}