#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int *aman=new int[5];
	*aman=10;

	cout<<*aman<<endl;
	delete aman;

	return 0;
}