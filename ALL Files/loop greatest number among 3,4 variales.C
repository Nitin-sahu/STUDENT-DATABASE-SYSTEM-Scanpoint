#include<stdio.h>
#include<conio.h>
int main()
{
int number=5,res=1,i;

for(i=0;i<=number;i++)
{
res=number*res;
number=number-1;
}

printf("factorial of 5 is:%d",res);

}
