#include<iostream>
using namespace std;
class grandfather{
	int a=5;
public:
	int geta()
	{
		return(a);
	}

};
class father{
	int b=5;
public:
	int getb()
	{
return(b);
	}
};
class child{
int c=10;

public:
 int getc()
 {
 	return (c);
 }


};
class global:public grandfather,public father,public child{

public:
	void display()
	{
cout<<geta()+getb()+getc();
       }     

};
int main(int argc, char const *argv[])
{
	#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
global b;
b.display();
	return 0;
}
