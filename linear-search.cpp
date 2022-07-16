#include<iostream>
using namespace std;

 int main(int argc, char const *argv[])
 {
 	#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
 	int arr[10]={1,5,2,4,3,6,9,8,7,6};
 	int i,num,*ptr;
 	
 	ptr=arr;
 	cout<<"enter number you want to search"<<endl;
 	cin>>num;

 	for (i=0;i<=10;i++)
 	{
 		if(*ptr==num)
 		{
 		
 			cout<<"number found at address"<<ptr<<endl;
 			break;

 		}
 		else if(i==10)
 		{
 			cout<<"number not fond any any point in memeory"<<endl;
 		}
 		else{
 			ptr++;
 		}
 	}
 	return 0;
 }