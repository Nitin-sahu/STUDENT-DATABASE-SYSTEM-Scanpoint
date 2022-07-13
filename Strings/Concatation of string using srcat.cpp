#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char k[10]="HEL";
	 char b[]="LLO";
	char c[10];
	int i,count=0,n;

	
	for(i=0;k[i]!='\0';i++)			//Copying 1st string into c
	{
		c[i]=k[i];
	//	cout<<"value of in  is"<<c;
	}
	
	
	for(i=0;k[i]!='\0';i++)				//length of final string
	{
		count++;
	}
	
	n=count;			//
		//cout<<"length  of c  is"<<n;
	
	
	for(i=0;b[i]!='\0';i++)				//copying 2nd string into final string, 
	{
		c[n++]=b[i];						//from position n
									// increase value of n
		
	}
	
	
		cout<<"Concated  String is"<<c;
	
	

	
	return 0;
}
