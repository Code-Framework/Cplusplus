#include<iostream>
using namespace std;
//// traditional method


// void swap (int &x ,int &y)
// {
// 	int t=x;
// 	x=y;
// 	y=t;
// 	cout<<"first is :"<<x<<endl;
// 	cout<<"second is:"<<y<<endl;
// }


//swap using pointers 
// void swappointer(int *x,int *y)
// {
// 	int z=*x;
// 	*x=*y;
// 	*y=z;
// }

////////////swap refrence /////////////////

void swaprefrence(int &x,int &y)
{
	int z=x;
	x=y;
	y=z;
}
int main()
{
	#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
int m;
int n;
cin>>m>>n;
/////////swappointer(&m,&n);////using pointetr
swaprefrence(m,n);
cout<<m<<n<<endl;

	return 0;
} 