#include<iostream>
#include<fstream>
#include<string.h>
#include<stdlib.h>
#include<iomanip>
using namespace std;
class Student
{
    public:
    int roll_no,i;
    int standard;
	string name;
	string subject;	
    int marks;
	float percentage;
	//int fail;
//	int pass;
	
	public:
				void readinputwritetofile()
   			{
			

						int n;
			
						fstream filename;
			
						cout<<"Enter the number of  student : ";
						cin>>n;																//2
						
				
						filename.open("filename.txt" , ios::out);   // file opem
					
						filename<<"roll_no"<<","<<"standard"<<","<<"name"<<","<<"subject"<<","<<"percentage"<<"\n";
					
					
						cout<<"Enter student details :\nid\tClass\tname\tsubject\tPmarks\tpercentage\n";
							for(i=0;i<n;i++)
							{
								
									cout<<"Roll_No : ";
									cin>>roll_no;
									//cout<<"\t";
									cout<<"\nClass : ";
									cin>>standard;
									//cout<<"\t";
									cout<<"\nName : ";
									cin>>name;
								//	cout<<"\t";
									cout<<"\nSubject : ";
									cin>>subject;	
									cout<<"\nPercentage : ";													// id0
									cin>>percentage;
									
								/*	system("cls");
										if(percentage[i]  < 33)
									{
										fail[i]=percentage[i];	
									}
									else
									{
									
										pass[i]=percentage[i];
									}*/
								
									
									filename<<roll_no<<","<<standard<<","<<name<<","<<subject<<","<<percentage<<"\n";

						    }
            }
        
                            void show()
							{
								cout << "\t\t\t\tDisplaying the Record" << endl;
								int i;							
								fstream filen;
									filename.open("filename.txt", ios::in);  //file opened in reading mode		
									while(!filee.eof())                           // reading the file
									{
										
										 getline(filee, line);
										 
										 if (((offset = line.find(se_name, 0))) != string::npos)
           							 {
											filename>>roll_no>>standard>>name>>subject>>percentage;
											
											cout<<"\n"
											
											<<left<<setw(12)<<"roll_no"
											<<left<<setw(12)<<"standard"
											<<left<<setw(12)<<"name"
											<<left<<setw(12)<<"subject"
											<<left<<setw(12)<<"percentage"
										//	<<left<<setw(12)<<"fail"
										<<"\n";
										
											cout<<"\n"
											
											<<left<<setw(12)<<roll_no
											<<left<<setw(12)<<standard
											<<left<<setw(12)<<name
											<<left<<setw(12)<<subject
											//<<left<<setw(12)<<marks
											<<left<<setw(12)<<percentage<<"\n";
								
										
									}
									filename.close();
						}
    
};


int main()
{
    int pwd,opwd=5499;
	string username;              //Declare the string
	string ousername ="Nitin";		//Initialize the string
	
	cout<<"Enter the Username : ";
	cin>>username;
	cout<<"\n Password : ";
	cin>>pwd;
	
	Student s;
	int r=username.compare(ousername);  //comparing two strings 
	
				if(r==0)
				{
					if(pwd == opwd)
					{
						"Welcome to My Program";
						system("cls");
						int z=0;
									do
									{
										int i;
										char ch,Continue;
										
										cout<<"\n\n       Menu of Program  ";
										
										cout<<"\n1-Write input to file\n2-Show  data from file \n3-Append data to file \n4-Search by name\n5-Search by Id\n6-to exit";
										
										cout<<("\n\nEnter the choice:");
										
										
										cin>>i;
										switch(i)
										{
											case 1:
												
													system("cls");
													s.readinputwritetofile();
													break;
										
											case 2:
												
												 	system("cls");
													s.show();
												 	break; 	
												
										
											case 3:
													system("cls");
												 //   appendtofile();
													break;
											
										
									
											case 4:
													
													system("cls");
												//	searchbyname();
													break;
											
										
											case 5:
													system("cls");
											//		searchbyid();
													break;
											
							        		//case 7: int f=1;
							        				//readinputwriteoffile();
							        		
											case 6: z = 1;
											
										}
									
									
									}while(z!=1);
					}
					
					else
						cout<<"wrong password entered";
				}
				//else
				//	cout<<"Wrong Username";
				
				
return 0;
}






