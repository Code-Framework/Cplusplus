#include<iostream>
using namespace std;
const int m=5;

class shopping
{
private:
	int itemcode[m];
	float itemprice[m];
	int counter;
public:
	void start(void)
	{
		counter =0;
	}
	void purchase(void);
	void remove(void);
	void totalsum(void);
	void itemlist(void);
};
void shopping::purchase(void)
{
	cout<<"product code"<<endl;
	cin>>itemcode[counter];
	cout<<"item price"<<endl;
	cin>>itemprice[counter];
	counter ++;
}
void shopping::remove(void)
{
	int x;
	cout<<"enter item code"<<endl;
	cin>>x;
	for(int i=0;i<=counter;i++)
	{
		if(itemcode[i]==x)
			itemprice[i]=0;
	}
}
void shopping::totalsum(void)
{
	int x=0;
	for(int i=0;i<counter;i++)
	{
			x=x+itemprice[i];
	}
	cout<<"total is purchase is :"<<x;
}
void shopping::itemlist(void)
{
	for(int i=0;i<=counter;i++)
	{
			cout<<"item code is :"<<itemcode[i]<<endl;
			cout<<"item price is:"<<itemprice[i]<<endl;
			cout<<"--------------------------------------------";			
	}
}
int main()
{
	#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif

	shopping shop;
	shop.start();
int x=1;
{
cout<<"enter 1 for purchase"<<endl;
cout<<"enter 2 for purchase remove"<<endl;
cout<<"enter 3 for total"<<endl;
cout<<"enter 4 for item list"<<endl;
cout<<"enter 5 for end shopping"<<endl;
cin>>x;
switch(x)
{
case 1:
shop.purchase();
break;
case 2:
shop.remove();
break;
case 3:
shop.totalsum();
break;
case 4:
shop.itemlist();
break;
case 5: break;
}
}
return 0;
}
