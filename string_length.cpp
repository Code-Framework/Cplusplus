#include<iostream>
#include<string>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
	string a;
	cin>>a;
	cout<<a.size()<<endl;
	cout<<a.length()<<endl;
// 	cin>>a;
// int i=0;
// while(a[i]!=0)
// {
// 	i++;
// }
// cout<<"length od string is :"<<i<<endl;


	return 0;
}