// 5 calculate  Area of square
//input 5
//output =25
#include <iostream>
using namespace std;
class A{
    public:		//visibility mode
    float a,area=0;
    A()			//default constructor
    {
        cout<<"\ncontructor invoked\n";
        a=5;
    }

    void fun(float);
    void display();
    ~A()							//desctructor
    {
        cout<<"\nDestructor invoked";
    }

};
void A::fun(float a1)         //"::" = Scope resolution operator 
    {
       
       area=a1*a1;
   
    }
void A::display()
    {
    
        cout<<"Area of square :"<<area;
      
    }
    
int main() {
    // Write C++ code here
    A s;    
   // s.getdata();
    s.fun(s.a);
    s.display();
    //cout<<"values after swap";
    //cout<<s.a<<s.b;

    return 0;
}

