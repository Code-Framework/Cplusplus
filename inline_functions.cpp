#include<iostream>
using namespace std;
inline int cube(int x)
{
	return(x*x*x);
}
int main()

{
	int c=cube(3);
	cout<<c<<endl;
	return 0;
}