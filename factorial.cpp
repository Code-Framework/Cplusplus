#include<iostream>
using namespace std;
long factorial(int n){
	if(n==0)
		return 1;
	return (n*factorial(n-1));////

/////////	notes how recursion works
// main function call factorial
//statment become false 
	//////returned n but again function call itself
	////////////function retured smaller value and again called itself 
	////again until breakdown

}
int main(){
	#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif

int num;
cin>>num;
cout<<"factorial is :"<<factorial(num);
}