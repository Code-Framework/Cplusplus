#include<iostream>
using namespace std;
class X{
	int a=10;
protected:
	void displaye();
};
void X::displaye()
{
	cout<<a*a<<endl;

}
int main(int argc, char const *argv[])
{

X x;
x.displaye();
	return 0;
}

