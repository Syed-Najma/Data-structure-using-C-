#include<iostream>
using namespace std;
#include<string.h>

class student
{
	private:
		char name[20];
		int age;
	public:
		student()//default contructor
		{
		}
		student(char *n)//one argument constructor
		{
			
		  strcpy(name,n);
		  age=0;
			
		}
		student(char *n,int a)//two argument constructor
		{
			strcpy(name,n);
			age=a;
		}
		student(student &s)//copy constructor
		{
		strcpy(name,s.name);
		age=s.age;
     	}
     	void show();
     	
};
void student::show()
{
	cout<<"the name is:"<<name<<endl;
	cout<<"the age is:"<<age<<endl;
	
}
int main()
{
	
	student s2("najma");
	student s3("naseer",56); 
	student s4(s3);
	
	s2.show();
	s3.show();
	s4.show();
	return 0;
}
	
		
		
