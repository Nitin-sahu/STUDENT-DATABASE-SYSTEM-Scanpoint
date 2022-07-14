//function overloading by types  of parameters
#include<iostream>
using namespace std;
class math
{
	public:
	void add(int a,int b)
	{
		int a1,b1;
		a1=a;
		b1=b;
		cout<<"function overloading by two arguments via add function"<<a1+b1;
	}
} ;

class maths:public math
{
		public:
		void add(double c,double d,double e)
	{
		double a1,b1,c1;
		a1=c;
		b1=d;
		c1=e;
		cout<<"\nfunction overloading by three arguments via add function"<<a1+b1;
	}
	
};


int main()
{
	math m;
	m.add(5,4); 
	
	maths m1;
	m1.add(2.1,6.2,9.1);
	
	
}
