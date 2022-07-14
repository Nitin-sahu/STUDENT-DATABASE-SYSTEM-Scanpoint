// 21 poistion of values in array  and print them 
//input  1 
//output =  position of 1 is 
#include <iostream>
#include<math.h>
using namespace std;
class A{
    public:
    int i,n,temp,arr[30];
   
    A(int a[])
    {
        cout<<"\ncontructor invoked with n=5 i=0  and arrays are initialized \n";
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
                if(arr[i]==temp)
                cout<<"\nValues of arraty at index"<<i<<"are :"<< arr[i];
            }
     
    }
    

int main() {
   
    int a[]={1,2,3,4,7,10};
    A s(a);    
   cout<<"enter Value whose positin need to find";
   cin>>s.temp;
    s.display();
    

    return 0;
}
