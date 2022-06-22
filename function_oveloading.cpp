#include<iostream>
using namespace std;

int add(int x,int y){
	int c=x+y;
	return c;
}
long add (long x,long y){
	long c=x-y;
	return c;
}
double add(double x,double y){
	double c=x*y;
	return c;
}

int main()
{
	#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
cout<<add(3,4);
return 0;
}