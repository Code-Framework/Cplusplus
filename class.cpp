#include<iostream>
using namespace std
int add(int x ,int y)
{
	return x+y;
}
double add(double x,double y)
{
	return x-y;
}

int main()
{
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif

cout<<add(1.7,5.5);

	return 0;
}