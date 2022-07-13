//Array programs using classes
//  19 input values in array  and print them  with Constructor 
//input  1 2 3 4
//output =  12 3 4

#include <iostream>
#include<math.h>
using namespace std;
class A{
    public:
    int i,n,temp=0,arr[30];
   
    A(int a[])
    {
        cout<<"\ncontructor invoked with n=5 i=0  \n";
        n=5;
         i=0;
        
         
          for(i=0;i<n;i++)
    {
        arr[i]=a[i];
    }

    }
  ~A()
    {
        cout<<"\nDestructor invoked";
    }

    void display();
    
};



void A::display()
    {
        
        for(i=0;i<n;i++)
            {
                cout<<"\nValues of arraty at index"<<i<<"are :"<< arr[i];
            }
     

    }
    

int main() {
   
    int a[]={1,2,3,4,7,10};
    A s(a);    
   
    s.display();
    

    return 0;
}

