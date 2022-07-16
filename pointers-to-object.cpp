#include<iostream>
using namespace std;
class testing
{
	int a=10,b=10;
public:
	void get(int ,int );
	void show(void);
};
void testing::get(int A,int B){
a=A;
b=B;
}
void testing::show(void)
{
	cout<<"a and b is :"<<a<<b<<endl;
}
int main(int argc, char const *argv[])
{
	#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
	testing *ptr=new testing;
	testing *pptr=ptr;
	ptr->get(10,20);
	pptr->show();
	cout<<pptr<<endl;
	cout<<ptr<<endl;
	delete ptr;
	cout<<pptr<<endl;
	cout<<ptr<<endl;
	ptr->show();

	return 0;
}