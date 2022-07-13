#include<stdio.h>
#include<conio.h>

int main()
{
	int i;
	char ch;
	
	printf("......./tMenu of Program...../t ");
	
	printf("1-Swapping Values\n2Diffreciate Float int\n3Area of cirlce\n4Area of square\n5Area of rectangle\n6Simple interest\n7Compound interest\n8Check Odd to Even\n9Meter to kilometer\n10Find factorial\n11Find reverse\nCount digits\n13Find sum of digits\nCheck if no is pallindrome\n15Check if no i sarmstrong\n16Find factorial in given range\nFind min and max from given number\n");
	
	printf("Enter the choice:");
	
	scanf("%d",&i);
	switch(i)
	{
		case 1:
			int a,b,c;
		a=1;
		b=2;
	
		printf("Value before swap:%d %d",a,b);
	
		c=b;
		b=a;
		a=c;
	
		printf("Value after swap:%d %d",a,b);
		break;
		
		case 2:
			/*float radius, area;
			printf("\nEnter the radius of Circle : ");
			scanf("%d",&radius);
			printf("\nRadiusof Circle : %d",radius);
			area = 3.14 * radius * radius;
			printf("\nArea of Circle : %f", area);*/
		case 3:
			int radius;
			float area;
printf("\nEnter the radius of Circle : ");
scanf("%d",&radius);
printf("\nRadiusof Circle : %d",radius);
area = 3.14 * radius * radius;
printf("\nArea of Circle : %f", area);


		case 4:
			int side,area;
	printf("\nEnter the Length of Side : ");
	scanf("%d", &side);
	area = side * side;
	printf("\nArea of Square : %d", area);

		case 5:
			int width=5;
int height=10;
int area=width*height;
printf("Area of the rectangle=%d",area);

		
		case 6:
			float P , R , T , SI ;
P =34000; R =30; T = 5;
SI = (P*R*T)/100;
printf("\n\n Simple Interest is : %f", SI);

		case 7:
			float p,r,t,ci;
printf("Enter Principle, Rate and Time: ");
scanf("%f%f%f",&p,&r,&t);
ci=p*pow((1+r/100),t);
printf("Bank Loans Compound Interest = %f%",ci);

		case 8:
			int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    // true if num is perfectly divisible by 2
    if(num % 2 == 0)
        printf("%d is even.", num);
    else
        printf("%d is odd.", num);
		case 9:
			unsigned int m;
	
	float km;

	printf("Enter Meters:");	
	scanf("%d",&m);
	
	km=m/1000.00;
	
	printf("Kilometers: %.1f",km);
		case 10:
			int number=5,res=1,i;
int t=number;
for(i=0;i<t;)
{
res=number*res;
number=number-1;
i++;
}
printf("factorial of 5 is:%d",res);
}
	    case 11:
	    int remainder,res=0,i;
int number,t;
 
printf("enter the number");
scanf("%d",&number);

t=number;
for(i=0;number!='\0';i++)
{

 remainder =number%10;
res=res*10+remainder;
number=number/10;
}
 
printf("Reverse of number:%d",res);
	case 12:
		long long n;
  int count = 0;
  printf("Enter an integer: ");
  scanf("%lld", &n);
 
  // iterate at least once, then until n becomes 0
  // remove last digit from n in each iteration
  // increase count by 1 in each iteration
  do {
    n /= 10;
    ++count;
  } while (n != 0);

  printf("Number of digits: %d", count);
	case 13:
		 int n,a,s=0; 
   printf("Enter a number: "); 
   scanf("%d",&n); 
    
   do{ 
       a=n%10; 
       s+=a; 
       n=n/10; 
   }while(n>0) 
    
   printf("\nSum is: %d", s); 
    
case 13:
	   int i,n,r,s=0;
    clrscr();
     
    printf("\n Enter The Number:");
    scanf("%d",&n);
     
    //LOOP TO FIND REVERSE OF A NUMBER
    for(i=n;i>0; )
    {
        r=i%10;
        s=s*10+r;
        i=i/10;
    }
     
    /* CHECKING IF THE NUMBER ENTERED AND THE REVERSE NUMBER IS EQUAL OR NOT */
    if(s==n)
    {
        printf("\n %d is a Palindrome Number",n);
    }
    else
    {
        printf("\n %d is not a Palindrome Number",n);
    }
case 14:
	int num,r,sum=0,temp;

    printf("Input  a number: ");
    scanf("%d",&num);

    for(temp=num;num!=0;num=num/10){
         r=num % 10;
         sum=sum+(r*r*r);
    }
    if(sum==temp)
         printf("%d is an Armstrong number.\n",temp);
    else
         printf("%d is not an Armstrong number.\n",temp);

	
	case 15:
		 int n, i;
    unsigned long long fact = 1;
    printf("Enter an integer: ");
    scanf("%d", &n);

    // shows error if the user enters a negative integer
    if (n < 0)
        printf("Error! Factorial of a negative number doesn't exist.");
    else {
        for (i = 1; i <= n;) {
            fact *= i;
	++i;
        }
        printf("Factorial of %d = %llu", n, fact);
    }
	case 16:
		int a[1000],i,n,min,max;
   
    printf("Enter size of the array : ");
    scanf("%d",&n);
 
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
 
    min=max=a[0];
    for(i=1; i<n; i++)
    {
         if(min>a[i])
		  min=a[i];   
		   if(max<a[i])
		    max=a[i];       
    }
     printf("minimum of array is : %d",min);
          printf("\nmaximum of array is : %d",max);
          break;
	    	
		
				

		
}

	getch();
	
	
	
	
	
}
