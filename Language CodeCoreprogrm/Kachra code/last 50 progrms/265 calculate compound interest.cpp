//265 calculate compound interest

// 7 find compund interest
//input  2000 3 2
//output =2121.8

#include <iostream>
#include<math.h>
using namespace std;
class A{
    public:
    float p,r,t,ci=0,amount;
    A()
    {
        cout<<"\ncontructor invoked\n";
        p=2000;
        r=3;
        t=2;
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
    cin>>p>>r>>t;    
}
void A::fun()
    {
       
      ci=p*pow((1+r/100),t);
       amount=p +ci;   
    }
void A::display()
    {
    
        cout<<"compound interest generateed :"<<ci<<"and amount"<<amount;
      
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

