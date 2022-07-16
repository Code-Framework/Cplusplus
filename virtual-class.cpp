#include<iostream>
using namespace std;
class grandfather{
	int a=101;
	public:
		int gf(){
			return (a);

		}
};
class father1:public  virtual grandfather{
	int a;
public:
	void showf1()
	{
cout<<gf()<<endl;
	}
};
class father2:public virtual  grandfather{
	int a;
public:
	void showf2()
	{
cout<<gf()<<endl;
	}
};

class child : public father1,public father2
{
public:
	void call(){

		return showf2();
	}

};
int main(int argc, char const *argv[])
{
	child c;
	c.call();
	/* code */
	return 0;
}

