#include<iostream>
using namespace std;
class Random
{
int X;
int* ptr=&X;
public:
	Random(){
		}
	Random(int x, int y )

	{
		*(ptr)=x+y;
	}
	void display()
	{
		cout<<X;
	}
};

int main(){
	#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif


	Random r1;
	r1=Random(10,10);
	
	r1.display();
	return 0;
}