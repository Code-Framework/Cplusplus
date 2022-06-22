#include<iostream>
using namespace std;
struct student {
	char name[10];
	int rollno;
	float totalmar     ks; 
};
int main()
{
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
	struct student a;
	cin>>a.name;
	cin>>a.rollno;
	cin>>a.totalmarks;
	cout<<a.name<<endl<<a.rollno<<endl<<a.totalmarks<<endl;
	return 0;
}