// 6 find simple interest
//input  2000 .03 2
//output =120

#include <iostream>
using namespace std;
class A{
    public:
    float p,r,t,si=0,amount;
    A()
    {
        cout<<"\ncontructor invoked\n";
        p=2000;
        r=.03;
        t=2;
    }

    void getdata();
    void fun();
    void display();
  ~A()
    {
        cout<<"\nDestructor invoked";
    }

    
};
void A::getdata()
{
    cout<<"Enter data\n";
    cin>>p>>r>>t;    
}
void A::fun()
    {
       
       si=p*r*t;
       amount=p +si;   
    }
void A::display()
    {
    
        cout<<"simple interest generateed :"<<si<<"and amount"<<amount;
      
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

