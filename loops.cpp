#include<iostream>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif

int i;
cin>>i;
do
{
	cout<<"running do loop"<<endl;
	i++;
}while(i<0);

while(i<0)
{
	cout<<"running do_while loop"<<endl;
	i++;
}

cout<<"value of i is : "<<i<<endl;
switch(i)
{
	case 1:
	cout<<"case 1"<<endl;
	break;
	case 2:
	cout<<"case 2"<<endl;
	break;
	case 3:
	cout<<"case 3"<<endl;
	break;
	default:
	cout<<"not a valid input"<<endl;
}
return 0;
}