//run time polymorphism using virtual function
#include<iostream>
using namespace std;
class Animal
{
	public:
   virtual 	void eat()
	{
		cout<<"Eating\n";
	}
} ;

class dog:public Animal
{
	public:
	void eat()
	{
		cout<<"Eating bones by run time polymorphism using virtual keyword \n";
	}
	
};
class cow:public Animal
{
	public:
	void eat()
	{
		cout<<"Eating bread by runtime polymorphism using virtual keyword \n";
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
