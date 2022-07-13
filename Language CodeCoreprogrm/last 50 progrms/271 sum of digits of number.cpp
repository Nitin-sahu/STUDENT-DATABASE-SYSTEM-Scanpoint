// 15 print sum of digits  
//input  121
//output = 4 

#include <iostream>
#include<math.h>
using namespace std;
class A{
    public:
    int n,r,sum=0,temp2,i;    
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
    
}
void A::fun()
    {
        
            temp2=n;;
             while(temp2>0)    
                {    
                r=temp2%10;    
                sum=sum+r;    
                temp2=temp2/10;    
                }   
               
        

    }
void A::display()
    {
      
        
            cout<<n<<" digits sum is \n"<<sum;
       // else 
            //cout<<i<<"is not aremstrog numbr\n";
    }
    
int main() {
    // Write C++ code here
    A s;    
  //  s.getdata();
    s.fun();
    s.display();
    //cout<<"values after swap";
    //cout<<s.a<<s.b;

    return 0;
}

