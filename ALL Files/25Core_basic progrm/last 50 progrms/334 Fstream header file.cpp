/*
reads input from user and save tht into a file
Open a file and  save  the entered  data from user
save the data into file from user and show the file
*/
#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
/*class Student
{
	public:
		
}*/
int main()
{
	
	
	fstream filename;

	
			
			
			filename.open("filename.txt", ios::in);  //file opened in reading mode
			
			string x;
		
			cout<<"Data in file are:\n";
			while(1)
			{
					filename>>x;
					if(x.find(","))
					cout<<"\t";
					
					if(x.find("\n"))
					cout<<"\n";
			
				if(filename.eof())
				break;

				cout<<x;
			}
			
			filename.close();
	
			
	
	
	

	
	/*	if(!filename)
	cout<<"filename not Open";
	else
	cout<<"filename open";
	
	
	
	
	filename<<"this is my first header file";*/
	
	
	
	 // Read means  create a variable ,input  value from others nd store them in that variable , jab tk woh bol rha h, till termination condition.
	
	
	//filename.close();
	//filename.read();                        
	
	

	
	
	return 0;
}
