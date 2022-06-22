#include<iostream>
using namespace std;
class ObjectReturn
{
	int X;
public:
	int objectRT(int x ,int y)
	{
	X=x+y;
	cout<<"x is :"<<X<<endl;
	}
	friend ObjectReturn method(ObjectReturn);////// Returning object
};
ObjectReturn method(ObjectReturn m1)
{
	ObjectReturn m2;
	m2.X=m1.X/2;
	cout<<m1.X<<endl;
	cout<<m2.X<<endl;
	return(m2);
}
int main()
{
	#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
	ObjectReturn r,self;
	r.objectRT(10,10);
	self=method(r);

}

