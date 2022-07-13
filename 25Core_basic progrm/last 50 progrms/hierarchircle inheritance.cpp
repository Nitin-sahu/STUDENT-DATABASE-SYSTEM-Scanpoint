#include <iostream>  
using namespace std;  
class Shape                 // Declaration of base class.  
{  
    public:  
    int a;  
    int b;  
    void get_data(int n,int m)  
    {  
        a= n;  
        b = m;  
    }  
};  
class Rectangle : public Shape  // inheriting Shape class  
{  
    public:  
    int rect_area()  
    {  
        int result = a*b;  
        return result;  
    }  
};  
class Triangle : public Shape    // inheriting Shape class  
{  
    public:  
    int triangle_area()  
    {  
        float result = 0.5*a*b;  
        return result;  
    }  
};  
int main()  
{  
    Rectangle r;  
    Triangle t;  
    int length,breadth,base,height;  
    std::cout << "Enter the length and breadth of a rectangle: " 
