#include<iostream>
using namespace std;
class circle
{
private:
    int radius;
public:
    void set(int r);
    void get();

};
void circle::set(int r)
  {
     radius=r;
  }
void circle::get()
  {
      float area=0;
     area=3.14*radius*radius;
     cout<<"the area of the circle is:"<<area;
  }
int main()
{
  int r;
  cout<<"enter the radius";
  cin>>r;
  circle c1;
  c1.set(r);
  c1.get();

}
