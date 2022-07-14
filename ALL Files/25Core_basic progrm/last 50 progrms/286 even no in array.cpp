// 24 Count  even numbers  iin  array  and print them 
//input  6
//  2 4 6 8 10 8 
//output =even no are 5
#include <iostream>
#include<math.h>
using namespace std;
class A{
    public:
    int i,j,n,count=0,arr[30];
   
    A(int a[])
    {
        cout<<"\ncontructor invoked with n=5 i=0  and arrays are initialized with 1,4,3,2,5\n";
        n=5;
         i=0;
        
         
          for(i=0;i<n;i++)
    {
        arr[i]=a[i];
        if(arr[i]%2==0)
        {
            count++;
        }

  
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
        
        
                cout<<"\ntotal  even Values in  arraty at index are :"<< count;
        
     
    }
    

int main() {
   
    int a[]={1,4,3,2,5};
    A s(a);    
 
    s.display();
    

    return 0;
}
