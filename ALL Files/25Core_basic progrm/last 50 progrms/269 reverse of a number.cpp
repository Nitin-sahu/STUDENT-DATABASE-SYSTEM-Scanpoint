// 18 print reverse of digits  
//input  1234
//output = 4321

#include <iostream>
#include<math.h>
using namespace std;
class A{
    public:
    int n,r,s=0,temp2,i;    
    A()
    {
        cout<<"\ncontructor invoked with      n=1234\n";
        n=1234;
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
               s=s*10 +r;
                temp2=temp2/10;    
                }   
               
        

    }
void A::display()
    {
      
        
            cout<<n<<" digits reverse  is \n"<<s;
       // else 
            //cout<<i<<"is not aremstrog numbr\n";
    }
    
int main() {
    // Write C++ code here
    A s;    
//    s.getdata();
    s.fun();
    s.display();
    //cout<<"values after swap";
    //cout<<s.a<<s.b;

    return 0;
}

