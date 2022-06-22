#include<iostream>
using namespace std;
 class addition
 {
 	static int num1;
 	static int num2;
 public:
 	void getnumber(int x,int y);
 	void numberresult(addition x,addition y);
 	void show();

};
void addition::getnumber(int x,int y){
	num1=x;
	num2=y;
	cout<<num1;
	cout<<num2<<endl;
}
void addition::numberresult(addition x ,addition y)
{
	num1=x.num1+y.num1;
	num2=x.num2+y.num2;
	// // cout<<"----"<<endl;
	// cout<<num1;
	// cout<<num2<<endl;
	// cout<<"----"<<endl;
}
void addition::show()
{
	
 		cout<<num1;
 		cout<<num2;
 	
}
int addition::num1;
int addition::num2;
int main()
{
	#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
	addition add1,add2,add3;
	add1.getnumber(1,5);
	add2.getnumber(3,1
		);
	add3.numberresult(add1,add2);
	add3.show();
	return 0;

}