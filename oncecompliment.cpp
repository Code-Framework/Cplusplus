#include<iostream>
#include<string>
using namespace std;
class binary
{
	string B;
public:
	void read()
	{
		
		cin>>B;
	}
	void bin_check(void)
	{
		for (int i=0;i<B.length();i++)
		{
			if(B.at(i)!='0' && B.at(i)!='1')
			{
				cout<<"incorrect binay :program existing";
				exit(0);
			}

		}
	}
	void ones()
	{
		bin_check();
		for(int i=0;i<B.length();i++)
		{
			if(B.at(i)=='0')
				B.at(i)='1';
			else
				B.at(i)='0';

		}
	}
	void dispaly(void)
	{
		ones();
		cout<<"output:"<<B<<endl;
	}
};
int main()
{
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
	binary bin;
	bin.read();
	bin.dispaly();
	return 0;
}
