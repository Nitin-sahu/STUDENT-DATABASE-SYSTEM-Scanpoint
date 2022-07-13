// 16 check  armstrong
//input  121
//output = aremstrog numbr 

#include <iostream>
#include<math.h>
using namespace std;
class A{
    public:
    int n,r,sum=0,temp;    
    A()
    {
        cout<<"\ncontructor invoked with      n=121\n";
        n=121;
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
    cin>>n;  
    temp=n;
}
void A::fun()
    {
     while(n>0)    
        {    
        r=n%10;    
        sum=sum+(r*r*r);    
        n=n/10;    
        }    

    }
void A::display()
    {
        if(temp==sum)    
        cout<<" aremstrog numbr";
        
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

