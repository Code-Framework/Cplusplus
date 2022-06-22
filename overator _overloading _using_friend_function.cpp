#include<iostream>
using namespace std;

class loading 
{
	int x;
	int y;
public:
	loading(){};//////////////////constructor
	loading(int X,int Y)//////////////argumental constructor
	{
       x=X;
       y=Y;
   }
   loading operator+(loading &a)
   {
   	loading ax;
   	ax.x=x+y;
   	ax.y=y+a.y;

   	return (ax);

   }
   friend void display(loading c)
   {
   	cout<<"x is :"<<c.x<<endl;
   	cout<<"y is :"<<c.y<<endl;
   }
};
   int main()
   {
   #ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif

   	loading a (0,9);
   	loading b (1,6);
   	loading c;
   	c=(a+b);
   	display(c);
   	return 0;
   }