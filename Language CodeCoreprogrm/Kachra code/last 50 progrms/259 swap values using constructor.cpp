//swap two prograns
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class A{
    public:
    int a,b,temp;
    public:
      A()
    {
    a =1;
    b=2;
    }
    void swap1(int *a1,int *b1)
    {
        int temp;
        temp=*a1;
        *a1=*b1;
        *b1=temp;
    }
   
};



int main() {
    // Write C++ code here
    A s;    
    cout<<"Constructor Invoked\n";
  
    s.swap1(&s.a,&s.b);
    
    cout<<"values after swap";
    cout<<s.a<<s.b;

    return 0;
}

