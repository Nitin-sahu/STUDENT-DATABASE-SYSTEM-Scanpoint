
/*
reads input from user and save tht into a file
Open a file and  save  the entered  data from user
save the data into file from user and show the file
*/
#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
/*Uclass student
{
	public:

	
																					
};*/

int main()
{
	
	int n;

	fstream filename;

			cout<<"Enter the number of  student";
			cin>>n;																//2
			
		int id[2],i;														//id0 id1
		int standard[2];
		string name[2];
		string subject[2];	
			
			filename.open("filename.txt" , ios::out);   // file opem
		
		filename<<"ID"<<","<<"Class"<<","<<"Name"<<","<<"Subject"<<"\n";
		
			cout<<"Enter student details : id ,Class and subject\n";
				for(i=0;i<n;i++)
				{
					
						cout<<"enter detail\n";
						cin>>id[i];
						cin>>standard[i];
						cin>>name[i];
						cin>>subject[i];														// id0
						
						filename<<id[i]<<","<<standard[i]<<","<<name[i]<<","<<subject[i]<<"\n";
						
						//	filename.open("filename.txt" , ios::out);
		
					//	filename<<id[i]<<"\t\t"<<Class[i]<<name[i]<<"\t\t"<<subject;
					
			}

	
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
