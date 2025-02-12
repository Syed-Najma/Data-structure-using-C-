#include <iostream>
using namespace std;
class add
{
  private:
     int a;
	 int b;
  public:
  
    add()
	{
		int x=0;
 		int y=0;
    } 	
   void addition(int x,int y)
   {
   	 int c;
   	 c=x+y;
   	 cout<<"the addition is:"<<c;
   }
  
};
int main()
{  int x,y;
    cout<<"enter the first no.";
    cin>>x;
    cout<<"enter the 2nd no.";
    cin>>y;
	add b1;
	b1.addition(x,y);
	return 0;
}
