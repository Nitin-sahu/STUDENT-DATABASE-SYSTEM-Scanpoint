// 11 convert m to km and delivery condition
//input  6000m
//output =6=km,yes delievery available

#include <iostream>
#include<math.h>
using namespace std;
class A{
    public:
    int a,b;
    A()
    {
        cout<<"\ncontructor invoked with a=5000  \n";
        a=5000;
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
        b=a/1000 ;
       
    }
void A::display()
    {
        if(b>5)
        cout<<" km is "<<b<<"delieverable";
        else
        cout<<" not delieverable  ";
    }
    
int main() {
    // Write C++ code here
    A s;    
  //  s.getdata();
    s.fun();
    s.display();
    //cout<<"values after swap";
    //cout<<s.a<<s.b;

    return 0;
}

