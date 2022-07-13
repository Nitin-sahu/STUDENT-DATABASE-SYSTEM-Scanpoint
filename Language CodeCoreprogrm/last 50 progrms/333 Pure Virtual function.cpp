//332 Demonstrate pure  virtual function
#include<iostream>
using namespace std;
class Animal
{
	public:
   virtual 	void eat() =0;
	
} ;

class dog:public Animal
{
	public:
	void eat()
	{
		cout<<"Eating bones to demonstrate virtual keyword \n";
	}
	
};
class cow:public Animal
{
	public:
	void eat()
	{
		cout<<"Eating bread to demonstrate  virtual keyword \n";
	}
};

int main()
{
	Animal *a;
	
	dog d;
	a=&d;
	d.eat();
	
	cow c;
	a=&c;
	c.eat();
}
