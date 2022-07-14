#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char k[]="HELLO";
	int i,count=0;
	string s1=string(k);
	for(i=0;k[i]!='\0';i++)
	{
		count++;
	}
	
	cout<<"String length Value is"<<count;
	
	return 0;
}
