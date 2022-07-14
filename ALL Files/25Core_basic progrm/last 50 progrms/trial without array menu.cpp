#include<iostream>
#include<fstream>
#include<string.h>
#include<stdlib.h>
#include<iomanip>
using namespace std;
class Student
{
    public:
    int roll_no;
    int i;//id0 id1
    int standard;
	string name;
	string subject;	
    int marks;
	int result;
	int percentage;
		int n,n2,f;
	//int fail;
//	int pass;
	
	public:
				void readinputwritetofile()
   			{
			

					
			
						fstream filename;
			
						cout<<"Enter the number of  student : ";
						cin>>n;																//2
						
				
						filename.open("filename.txt" , ios::out);   // file opem
					
					//	filename<<"roll_No"<<","<<"standard"<<","<<"name"<<","<<"Subject"<<","<<"percentage"<<"\n";
					
					
						cout<<"Enter student details :\nid\tClass\tname\tsubject\tpercentage\n";
							for(i=0;i<n;i++)
							{
								
										cout<<"roll_No : ";
									cin>>roll_no;
									
									cout<<"\t";
									cout<<"\nstandard : ";
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
        
        
        							void append()
        				
						
							{
        						
        							
			
						fstream filename;
			
						cout<<"Enter the number of  student : ";
						cin>>n2;																//2
						
				
						filename.open("filename.txt" , ios::app);   // file opem in append mode
						cout<<"file open in append mode";
					
					//	filename<<"roll_No"<<","<<"standard"<<","<<"name"<<","<<"Subject"<<","<<"percentage"<<"\n";
					
					 f=n+n2;
						//for(i=n;i!=f;i++)
							{
								
									cout<<"roll_No : ";
									cin>>roll_no;
									
									cout<<"\t";
									cout<<"\nstandard : ";
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
								int i,offset;							
								string line;
								fstream filename;
									filename.open("filename.txt",ios::in);  //file opened in reading mode		
								//	while(1 )                           // reading the file
									{
										
										
										//cout<<roll;
										
										
										  while (!filename.eof())
											        {
											            getline(filename, line);
											            
											            if ( ( (offset = line.find(roll_no))) != string::npos)
											            {
											                //cout << "\nId ::" << se_id;
											                cout<<"integration successful";																							// experiment fail
											                cout <<left<<setw(12)<<roll_no;
											                break;
											            }
											            
											        }
										
										
										
										
										//for(i=0;i<f;i++)
										{
										
										//	filename>>roll_no>>standard>>name>>subject>>marks>>percentage;
											
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
											<<left<<setw(12)<<subject;
											
												//if(filename.eof()==0)
										//break;
											
									}
										
									}
								
							filename.close();		
						}
    				


									void Searchbyname()
									{
								
											cout << "\t\t\t\tSearching the Record" << endl;

											    int offset;
											    std::string se_name, line;
											    ifstream filee;
											    filee.open("filename.txt");
											     cout << "\nType name of student you want to search:";
											    cin >> se_name;
											   // cout << "\nType id of student you want to search:";
											   // cin >> se_id;
											    if (filee.is_open())
											    {
											
											        while (!filee.eof())
											        {
											            getline(filee, line);
											            
											            if (((offset = line.find(se_name, 0))) != string::npos)
											            {
											                //cout << "\nId ::" << se_id;
											                cout << line;
											                break;
											            }
											            
											        }
											        
											        filee.close();
											    }
											    else
											    {
											        cout << "search not found";
											    }
											
										}
										
										
										
										
										
										void searchbyid()
											{
	
													cout << "\t\t\t\tSearching the Record" << endl;
												
												    int offset;
												    std::string se_id, se_name, se_email, se_home, se_clas, se_tele, se_cell, se_sec, se_gender, line;
												    ifstream filee;
												    filee.open("filename.txt");
												     
												    cout << "\nType id of student you want to search:";
												    cin >> se_id;
												    if (filee.is_open())
												    {
												
												        while (!filee.eof())
												        {
												            getline(filee, line);
												            if (((offset = line.find(se_id, 0))) != string::npos)
												            {
												                //cout << "\nId ::" << se_id;
												                cout << line;
												                break;
												            }
												            
												        }
												        
												        filee.close();
												    }
												    else
												    {
												        cout << "search not found";
												    }

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
												   s.append();
													break;
											
										
									
											case 4:
													
													system("cls");
													s.Searchbyname();
													break;
											
										
											case 5:
													system("cls");
													s.searchbyid();
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
				else
				cout<<"Wrong Username";
				
				return 0;

}




