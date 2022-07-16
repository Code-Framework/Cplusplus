#include<iostream>
using namespace std;
int add(int a,int b)
{
	return a+b;
}
int sub(int a,int b)
{
	return a+b;
}
int main(int argc, char const *argv[])
{

int (*ptr)(int ,int );

	ptr=&add;
	cout<<ptr(100,20);
	ptr=&sub;
	cout<<ptr(30,30);
	return 0;

}
	