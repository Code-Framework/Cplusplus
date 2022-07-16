#include<iostream>
using namespace std;
 class practice{
 	int age=20;
 public:
 	void getage(int);
 	void display(void);
 };
void practice::getage(int age)
 {
 	this->age=age;
}
 void practice::display()
 {
 	cout<<age<<endl;
 }
 int main(int argc, char const *argv[])
 {
 	practice p
 	p.getage(10);
 	p.display();
 	return 0;
 }