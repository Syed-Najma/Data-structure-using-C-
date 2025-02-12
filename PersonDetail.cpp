#include<iostream>
using namespace std;
class person
{
	private:
		int age;
	    string name;
	public:
		void set();
		void get();
		
};
void person::set()
{ 
    
	
	string name="najma";
	cout<<"the name is:"<<name;
	
}
void person::get()
{
	cout<<"enter the age";
	cin>>age;
}
int main()
{
	int age;
    string name;
    person p;
	p.get();
	p.set();
	return 0;
}
