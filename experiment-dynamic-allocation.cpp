#include<iostream>
#include<cstring>
using namespace std;
int main(int argc, char const *argv[])
{
	#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif


int *aman=new int[10];
*aman=10;
int *see;
see=aman;
for (int i = 0; i < 10; ++i)
{
	cout<<aman<<":::::::::::"<<*aman<<endl;
	aman++;
}
cout<<"value of see is :"<<see<<endl;
cout<<see;
delete aman;

for (int i = 0; i < 10; ++i)
{
	cout<<see<<":::::::::::"<<*see<<endl;
	aman++;
}
return 0;
}