#include<iostream>
using namespace std;
///////////////////////////////////////////first way of writing functions
void show()
{
	string name;
	cin>>name;
	cout<<name<<endl;
}

int main()
{
	#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif

show();
return 0;
}
////////////////////////////second way of writing functions ////////////////////
// void show(void)
// {
// 	string name;
// 	cin>>name;
// 	cout<<name<<endl;

// }