//run time polymorphism
#include<iostream>
using namespace std;
class Animal
{
	public:
	void eat()
	{
		cout<<"Eating";
	}
} ;

class dog:public Animal
{
	public:
	void eat()
	{
		cout<<"Eating bones using run time polymorphism\n";
	}
	
};
class cow:public Animal
{
	public:
	void eat()
	{
		cout<<"Eating bread using runtime polymorphism\n";
	}
};

int main()
{
	Animal a;
	a.eat(); 
	
	
	
	dog d=dog();
	d.eat();
	
	cow c=cow();
	c.eat();
}
