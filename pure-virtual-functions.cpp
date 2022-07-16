#include<iostream>
using namespace std;
class grandfather
{
public:
	virtual void display()=0;
};
class father1:public grandfather
{
public:
	void display()
	{
		cout<<"hello im ";
	}

};
class father2:public grandfather{
public:
	void display()
	{
		cout<<"aman";
	}
};

int main(int argc, char const *argv[])
{
	#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
	grandfather *ptr[2];
	father1 f1;
	father2 f2;

	ptr[0]=&f1;
	ptr[1]=&f2;

	cout<<"displaying programmer"<<endl;
	ptr[0]->display();
	ptr[1]->display();
	return 0;
}