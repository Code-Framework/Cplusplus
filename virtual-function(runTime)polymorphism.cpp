#include<iostream>
#include<cstring>
using namespace std;
class media{
protected:
	char title[50];
	float price;
public:
	media(char *s ,float a)
	{
		strcpy(title,s);
		price=a;
	}
	virtual void display(){

	};
};
class book:public media{
	int pages;
public:
	book(char *s ,float a,int p):media(s,a)
	{
		pages=p;
	}
	void display();
};
class tape:public media{
	int time;
public:
	tape(char *s ,float a,int t):media(s,a)
	{
		time=t;
	}
	void display();
};
void book::display()
{
	cout<<title<<endl;
	cout<<price<<endl;
	cout<<pages<<endl;
}
void tape::display()
{
	cout<<title<<endl;
	cout<<price<<endl;
	cout<<time<<endl;
}
int main(int argc, char const *argv[])
{
	#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif

	char *title =new char[30];
	float price;
	int time;
	int pages;

	cout<<"book details"<<endl;
	cout<<"enter values"<<endl;
	cout<<"book title :"<<endl;cin>>title;
	cout<<"book price"<<endl;cin>>price;
	cout<<"book pages"<<endl;cin>>pages;
	book book1(title,price,pages);

	cout<<"tape details"<<endl;
	cout<<"enter values"<<endl;
	cout<<"tape title :"<<endl;cin>>title;
	cout<<"tape price"<<endl;cin>>price;
	cout<<"tape time"<<endl;cin>>time;
	tape tape1(title ,price ,time);

	media *ptr[2];
	ptr[0]=&book1;
	ptr[1]=&tape1;

	cout<<"media details"<<endl;
	cout<<"book details";
	ptr[0]->display();
	cout<<"tape details";
	ptr[1]->display();
	return 0;
	return 0;
}

