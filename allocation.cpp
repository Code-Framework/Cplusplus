#include<iostream>
using namespace std;
class sample
{

private :
int data1;
char data2;
public:
	void set(int i ,char c)
	{
		data1=i;
		data2=c;
	}
	void display(void)
	{
		cout<<data1<<endl;
		cout<<data2<<endl;
	}

};
int main()
{
	#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
#endif
	sample *s_ptr;

	try{
		s_ptr=new sample;
	}
	catch(bad_alloc)
	{
		cout<<"bad allocation occured";
		return 1;

	}

	s_ptr->set(25,'B');
	s_ptr->display();
	delete s_ptr;
	return 1;
}