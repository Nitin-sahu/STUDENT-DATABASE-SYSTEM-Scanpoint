#include <iostream>
#include<math.h>
using namespace std;
class A{
    public:
    int a,flag=0;
A()
    {
        cout<<"\ncontructor invoked\n";
        a=2;
    }
  ~A()
    {
        cout<<"\nDestructor invoked";
    }

    
    void getdata();
    void fun();
    void display();
    
};
void A::getdata()
{
    cout<<"Enter data\n";
    cin>>a;    
}
void A::fun()
    {
       
      if(a%2==0)
       flag=1;   
    }
void A::display()
    {
        if(flag==1)
        cout<<"no is even";
        else
        cout<<"no is odd";
    }
    
int main() {
    // Write C++ code here
    A s;    
   // s.getdata();
    s.fun();
    s.display();
    //cout<<"values after swap";
    //cout<<s.a<<s.b;

    return 0;
}

