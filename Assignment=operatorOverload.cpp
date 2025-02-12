#include<iostream>
using namespace std;
class sample
{
   int x,y;
   public:
   	sample()
   	{
    }
    sample(int i,int j)
    {
    	x=i;
    	y=j;
	}
	void show()
	{
		cout<<"x="<<x<<endl;
		cout<<"y="<<y<<endl;
	}
	sample operator=(sample op2);
	
};
sample sample::operator=(sample op2)
{
	x=op2.x;
	y=op2.y;
	return *this;
}
int main()
{
	sample ob1(10,20),ob2(30,40),ob3(50,60);
	ob1.show();
	ob2.show();
	ob3.show();
	ob1=ob2=ob3;
	ob1.show();
	ob2.show();
	return 0;
}