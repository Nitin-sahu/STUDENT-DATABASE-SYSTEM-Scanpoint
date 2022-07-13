// 23 Sort  input values in descending array  and print them 
//input  5
//  9 2001 2 3 8
//output =20001 9 8 3 2
#include <iostream>
#include<math.h>
using namespace std;
class A{
    public:
    int i,j,n,temp=0,arr[30];
   
    A(int a[])
    {
        cout<<"\ncontructor invoked with n=5 i=0  and arrays are initialized with 1,4,3,2,5\n";
        n=5;
         i=0;
        
         
          for(i=0;i<n;i++)
    {
        arr[i]=a[i];
  
    }
    
                 for (i = 0; i < n; ++i) 
        {
 
            for (j = i + 1; j < n; ++j)
            {
 
                if (arr[i] < arr[j]) 
                {
 
                    temp =  arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
 
                }
 
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
        
        for(i=0;i<n;i++)
            {
              
                cout<<"\n Sorted Values in descending of arraty at index"<<i<<"are :"<< arr[i];
            }
     
    }
    

int main() {
   
    int a[]={1,4,3,2,5};
    A s(a);    
 
    s.display();
    

    return 0;
}

