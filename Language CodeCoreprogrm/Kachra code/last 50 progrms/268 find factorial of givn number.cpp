// 12 find factorial
//input  5
//output = factorial is 120

#include <iostream>
#include<math.h>
using namespace std;
class A{
    public:
    int number,res=1;
    
    void getdata();
    void fun();
    void display();
    
};
void A::getdata()
{
    cout<<"Enter data\n";
    cin>>number;    
}
void A::fun()
    {
       int i;
        int t=number;
     
        for(i=0;i<t;i++)
        {
        res=number*res;
        number=number-1;
        }

       
    }
void A::display()
    {
        
        cout<<" Factorial  is "<<res;
        
    }
    
int main() {
    // Write C++ code here
    A s;    
    s.getdata();
    s.fun();
    s.display();
    //cout<<"values after swap";
    //cout<<s.a<<s.b;

    return 0;
}

