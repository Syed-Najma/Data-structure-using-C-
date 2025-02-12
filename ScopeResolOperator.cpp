#include<iostream>
using namespace std;
class scope
{
	private:
		char name[20];
		int marks;
	public:
	
		void setinfo(char *n,int a);
		void showinfo();
		
		
};
void scope::setinfo(char *n,int a)
{ 
     strcpy(name,n);
     marks=a;
}
void scope::showinfo()
{
	cout<<"the name is:"<<name<<endl;
	cout<<"the marks are:"<<marks;
}
int main()
{
	scope s;
	s.setinfo("najma naseer",80);
	s.showinfo();
	return 0;
}