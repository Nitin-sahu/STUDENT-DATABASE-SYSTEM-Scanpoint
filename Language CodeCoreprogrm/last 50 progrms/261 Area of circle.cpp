
//Area of cirlce
//input 5
//output =78.50
//area of circle
#include <iostream>
using namespace std;
class A{
    public:
    float a,area=0;
    A()				//default constructor
    {
        cout<<"\ncontructor invoked";
        a=5;
    }
    void getdata();
    void fun(int);
    void display();
    ~A()							//destructor
    {
        cout<<"\nDestructor invoked";
    }
    
};
void A::getdata()    //" :: "= scope resolution operator to call class function, outside the class
{
    cout<<"Enter data\n";
    cin>>a;    
}
void A::fun(int a1)
    {
       
       area=3.14 * a1 * a1;
   
    }
void A::display()
    {
    
        cout<<"Area of cirlce"<<area;
      
    }
    
int main() {
    // Write C++ code here
    A s;    
  //  s.getdata();
    s.fun(s.a);
    s.display();
    //cout<<"values after swap";
    //cout<<s.a<<s.b;

    return 0;
}

