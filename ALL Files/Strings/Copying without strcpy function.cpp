#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char k[]="HELLO",j[10];
	int i,count=0;

	for(i=0;k[i]!='\0';i++)
	{
		j[i]=k[i];
	}
	
	//for(i=0;k[i]!='\0';i++)
	
		cout<<"Copied String is"<<j;
	
	
	//cout<<"String length Value is"<<count;
	
	return 0;
}
