#include<iostream>
using namespace std;
int seter()
{
	int a;
	cin>>a;
	return a;
}

int main()
{
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif

int x=seter();
cout<<x<<endl;
return 0;
}