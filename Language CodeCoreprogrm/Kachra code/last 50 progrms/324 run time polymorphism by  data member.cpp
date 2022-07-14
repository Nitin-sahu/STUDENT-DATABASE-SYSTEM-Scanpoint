//run time polymorphism by data member
#include<iostream>
using namespace std;
class Animal
{
	public:
	string name="Hello\n";
} ;

class dog:public Animal
{
	public:
	string name="Hi";
	
};
class cow:public Animal
{
	public:
	string name="Wassup";
};

int main()
{
	Animal a;
	cout<<"value of string name  is\n"<<a.name;
	
	dog d;
	cout<<"value of string name in dog class is \n"<<d.name;
	
	
}
