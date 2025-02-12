#include<iostream>
using namespace std;
class sample
{
	int m;
	int n;
	void display();
	public:
		friend int sum(sample x);
		void set_mn(int m,int n);
		void put_mn();
	
};
void sample::set_mn(int m,int n)
{
	this->m=m;
	this->n=n;
}
inline void sample::put_mn()
{
	cout<<"m:"<<m<<endl<<"n:"<<n<<endl;
	
}
int sum(sample x)
{
	return x.m+x.n;
}
int main()
{
	sample s1,s2;
	s1.set_mn(7,8);
	s1.put_mn();
	s2.set_mn(4,6);
	s2.put_mn();
	cout<<"the sum of s1:"<<sum(s1);
	return 0;
}