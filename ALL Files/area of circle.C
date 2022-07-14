#include<stdio.h>
#include<conio.h>
#include<math.h>
int main() 
{
float radius, area;
printf("\nEnter the radius of Circle : ");
scanf("%d",&radius);
printf("\nRadiusof Circle : %d",radius);
area = 3.14 * radius * radius;
printf("\nArea of Circle : %f", area);
return (0);
}
