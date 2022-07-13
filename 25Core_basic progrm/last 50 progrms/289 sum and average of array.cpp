//Array programs using classes
// P=20 sum and avergage of input values in array  and print them 
//input  1 8
//output =  sum is 9 , avg is 4


#include <iostream>
#include<math.h>
using namespace std;
class A{
    public:
    int i,n,temp=0,arr[30],sum=0;
   
    A(int a[])
    {
        cout<<"\ncontructor invoked with n=5 i=0  and arrays are initialized \n";
        n=5;
         i=0;
        
         
          for(i=0;i<n;i++)
    {
        arr[i]=a[i];
        sum=sum+a[i];
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
     cout<<"\nSum is "<<sum<<"Average is "<<sum/n;

    }
    

int main() {
   
    int a[]={1,2,3,4,7,10};
    A s(a);    
   
    s.display();
    

    return 0;
}

