#include<stdio.h>
#include<conio.h>
int main()
{
	
	int a ,b,newvariable,nmax,first_max,min;
	int l;
	printf("Enter initial two number:\n");

	scanf("%d %d",&a,&b);	


	first_max=a;
	min=b;
if(a>b)
{
	first_max=a;
	min=b;
}
else
{
	first_max=a;
	min=b;	
}

printf("Enter the new number to compare:");
scanf("%d",&newvariable);

if(newvariable>first_max)
{
	nmax=newvariable;
	min=first_max ;
	first_max=nmax;
	nmax=newvariable;
}
else
{
   if(newvariable<min) 	
   {
   	min=newvariable;
   }
}


printf("\nGreatest number is %d , \n minimum number is %d \n",nmax,min);

printf("\nTo Enter more number press 0:");
scanf("%d",&l);	


	
while(l==0)
{
	printf("\nEnter next two numbers :\n");

	scanf("%d %d",&a,&b);	


	first_max=a;
	min=b;
if(a>b)
{
	first_max=a;
	min=b;
}
else
{
	first_max=a;
	min=b;	
}

printf("\nEnter the new number to compare:");
scanf("%d",&newvariable);

if(newvariable>first_max)
{
	nmax=newvariable;
	min=first_max ;
	first_max=nmax;
	nmax=newvariable;
}
else
{
   if(newvariable<min) 	
   {
   	min=newvariable;
   }
}


printf("\n\nAmong enterd numbers till now \nGreatest number is : %d \nMinimum number is : %d ",nmax,min);

printf("\nTo Enter more numbers press 0:");
scanf("%d",&l);	

}
/*
*/
return 0;
}
