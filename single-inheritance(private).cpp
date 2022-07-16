#include<iostream>
using namespace std;
class x{
	int a=10;

	
public:
	int geter();///////////////private here ;s
	void displaye()//////////private functions ;
	{
		cout<<"a is :"<<a<<endl;
	}
};
class y:private x{
public:
	int b=10;
	void setet();
	void display();

};
int x::geter()
{
	return a;

}
void y::setet(){

	b=b*geter();
}
void y::display()
{
	cout<<"Value of B is :"<<b<<endl;
}

 int main(int argc, char const *argv[])
{
	#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
    x A;
    y B;
    B.setet();
    B.display();

	return 0;
}

