#include<stdio.h>
int main() 
{
	
  int a,b,c;
	a=1;
	b=2;
	
	printf("Value before swap:%d %d",a,b);
	
	c=b;
	b=a;
	a=c;
	
	printf("Value after swap:%d %d",a,b);
	return 0;
	
}
   
