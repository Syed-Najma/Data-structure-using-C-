#include<iostream>
using namespace std;
class complex
{
	private:
		float real;
		float imaginary;
	public:
		
	void setdata()
	{
		real=34.7;
		imaginary=78.8;
	}
	void getdata()
	{
		cout<<"the real value is:"<<real<<endl;
		cout<<"the imaginary value is:"<<imaginary;
	}
};
int main()
{
	complex c;
	c.setdata();
	c.getdata();
	return 0;
}