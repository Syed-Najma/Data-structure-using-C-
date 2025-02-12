#include<iostream>
using namespace std;
class sample
{
	int x;
	public:
		void getdata()
		{
			cout<<"enter the value of x"<<endl;
			cin>>x;
		}
		void show()
		{
			cout<<"x="<<x<<endl;
		}
		int operator==(sample op);
};
int sample ::operator==(sample op)
{
	int i;
	if(x==op.x)
	i=1;
	else
	i=0;
	return i;
}
int main()
{
	sample s1,s2;
	s1.getdata();
	s2.getdata();
	s1.show();
	s2.show();
	if(s1==s2)
	cout<<"s1 and s2 are equal"<<endl;
	else
	cout<<"s1 and s2 are not equal"<<endl;
	return 0;
}