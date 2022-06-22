#include<iostream>
using namespace std;

class employee
{

	char name[10];

	int age;
public:
	void get();
	void show();
};
void employee::get()
{
	cout<<"Enter name"<<endl;
	cin>>name;
	cout<<"Enter age "<<endl;
	cin>>age;
}
void employee::show()
{
	cout<<"manager name :"<<name<<endl;
	cout<<"manager age :"<<age<<endl;
}
const int size=1;
int main()
{
	#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
	
	employee man[size];


	for (int i=0;i<=size;i++)
	{
		man[i].get();
	}
	for(int 4
		i=0;i<=size;i++)
	{
		man[i].show();
	}
	return 0;


}

