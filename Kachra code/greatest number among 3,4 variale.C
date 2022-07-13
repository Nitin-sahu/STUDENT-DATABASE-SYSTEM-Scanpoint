#include<stdio.h>
#include<conio.h>
int main()
{
	
do{
	int a ,b,newvariable,nmax,first_max,min;
	int l;
	printf("Enter the  integer variables value");

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

printf("Enter the new variable");
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


printf("Greatest number is%d, minimum value is %d",nmax,min);

printf("\nto Enter more value press :0");
scanf("%d",&l);	


	
}while(l==0);


/*
if(l==0)
{
	int a ,b,newvariable,nmax,first_max,min;
char c;
printf("Enter the  integer variables value");

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

printf("Enter the new variable");
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


printf("Greatest number is%d, minimum value is %d",nmax,min);

printf("Do you want to contnue");
scanf("%d",&l);
	
}*/
return 0;
}

