/////////////////////////////not working need more time 


#include<iostream>


#include<cstring>
using namespace std;

int main(int argc, char const *argv[])
{
	#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
	int i=0;
	char *ptr[1]={'S'};
	char name[10];
	cin>>name;
	for(i=0;i<5;i++)
	{
		if (!strcmp(name,*ptr[i]))
		{		cout<<"yes available"<<endl;
			    break;
		}

	}
	if(i==5)
	{
		cout<<"not available"<<endl;
	}
	return 0;
}