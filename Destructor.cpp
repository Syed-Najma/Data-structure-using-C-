#include<iostream>
using namespace std;
#include<string.h>
int count=0;
class student
{
	int roll;
	int age;
	char name[20];
	
	public:
		student(int r,int a,char *n);
		~student();
		void get_details();
		
};
student::student(int r,int a,char *n)
{
	count++;
	cout<<"no. of objects created: "<<count<<endl;
	roll=r;
	age=a;
	strcpy(name,n);
}
student::~student(){
	cout<<"no. of objects destroyed: "<<count<<endl;
	count--;
}
void student::get_details()
{
	cout<<"name:"<<name<<endl;
	cout<<"age:"<<age<<endl;
	cout<<"rollno.:"<<roll<<endl;
}
int main()
{
	student s1(15,21,"najma");
	s1.get_details();
	student s2(12,23,"areeb");
	s2.get_details();
	return 0;
	
	
}