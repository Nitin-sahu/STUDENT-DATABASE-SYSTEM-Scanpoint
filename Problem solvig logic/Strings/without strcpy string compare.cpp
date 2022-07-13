#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char k[]="HELLO";
	char b[]="hello";
	
	int i,count1=0,count2=0;

	for(i=0;k[i]!='\0';i++)
	{
		count1++;
	}
	
//	cout<<"String length Value is"<<count;
	
	
		for(i=0;b[i]!='\0';i++)
	{
		count2++;
	}
	
	if(count1==count2)
		cout<<"Strings are of  equal  lenght "<<count1;
	
	
	return 0;
}
