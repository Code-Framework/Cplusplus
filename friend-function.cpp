#include<iostream>
using namespace std;
class sample
{
	int a;
	int b;
public:
	void setvalue()
	{
		a=25;
		b=10;
	}
	friend float mean(sample x);
};
float mean(sample x)
{
	return (x.a+x.b)/2.0;
}
int main()
{
	sample a;
	a.setvalue();
	cout<<"float value is :"<<mean(a)<<endl;

}