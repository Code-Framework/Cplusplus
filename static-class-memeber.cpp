#include<iostream>
using namespace std;

class item
{
	static int count;
	int number;
public:
	void getdata(int x);
	void showdata();
	void neter();
};
void item::getdata(int x)
{
	number =x;
	count++;

}
void item::showdata(void)
{
	cout<<"value of number is "<<number<<endl;

}
void item::neter(void)
{
	cout<<"count is : "<<count<<endl;
}
int item::count;
int main()
{
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif


	item a,b,c;
	a.showdata();
	b.showdata();
	c.showdata();

	a.getdata(100);
	b.getdata(200);
	c.getdata(300);


	a.showdata();
	b.showdata();
	c.showdata();

	a.neter();

}