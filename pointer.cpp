#include<iostream>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
#endif
	int *ptr =new int (30);
	cout<<*ptr<<endl;
	delete ptr;
	cout<<*ptr<<endl;

}