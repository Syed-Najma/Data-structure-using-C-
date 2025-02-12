#include<iostream>
using namespace std;
class unary
{
	int x,y;
	public:
		unary()
		{
		}
		unary(int i,int j)
		{
			x=i;
			y=j;
		}
		void show()
		{
			cout<<"x="<<x<<endl;
			cout<<"y="<<y<<endl;
		}
		unary operator++();
		
};
unary unary::operator++()
{
	x++;
	y++;
	return *this;
}
int main()
{
	unary u1(2,3),u2(1,4);
	u1.show();
	u2.show();
	++u1;
	u1.show();
	u2=++u1;
	u1.show();
	u2.show();
	return 0;
	
}