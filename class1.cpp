#include<iostream>
using namespace std;

class item
{
	int number;
	float cost;
public:
	void getdata(int x,float y);
	void showdata()
	{
		cout<<number<<endl;
		cout<<cost<<endl;
	}
};
void item ::getdata(int x,float y)
{
	number=x;
	cost=y;
}
int main()
{
	#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
	item a,b;
	int f;
	float g;
	cin>>f>>g;
	a.getdata(f,g);
	a.showdata();
	b.getdata(2,70);
	b.showdata();



	return 0;
}