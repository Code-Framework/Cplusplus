#include<iostream>
using namespace std;
class X{
private:
	int priv=10;
protected:
	int prot=10;
public:
	int pub=100;
	int seter();
};
int X::seter(){
	return(priv*prot);
}
class A :public X //access to all functions and memebers:
{

public:
	int seterr(){
		int z;

		return z=seter();
		
	}

};
class B :protected X
{

};
class D :private X
{

};
int main(int argc, char const *argv[])
{
	#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
	X x;
	A a;
	a.pub=30;
	cout<<a.pub;
	// cout<<a.seterr();
	return 0;
}