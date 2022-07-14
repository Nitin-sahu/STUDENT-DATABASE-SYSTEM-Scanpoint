
//input 5 4
//output =20
#include <iostream>
using namespace std;
class A{
    public:
    float b,area=0,l;
    
    A()
    {
        cout<<"\ncontructor invoked";
        b=5;
        l=4;
    }

    void getdata();
    void fun(float,float);
    void display();
    
      ~A()
    {
        cout<<"\nDestructor invoked";
    }

    
};
void A::getdata()
{
    cout<<"Enter data\n";
    cin>>l>>b;    
}
void A::fun(float a1,float b1)
    {
       
       area=a1*b1;
   
    }
void A::display()
    {
    
        cout<<"Area of rectangle"<<area;
      
    }
    
int main() {
    // Write C++ code here
    A s;    
   //s.getdata();
    s.fun(s.l,s.b);
    s.display();
    //cout<<"values after swap";
    //cout<<s.a<<s.b;

    return 0;
}


