#include<iostream>
#include<fstream>
#include<string.h>
#include<stdlib.h>
#include<iomanip>
#include<vector>
#include<sstream>
using namespace std;
class Student
{
    public:
    int roll_no;
    int i;//id0 id1
    string section;
	string name;
	string subject;	
    int p_marks,c_marks,m_marks;
	int percentage,n;
	//int fail;
//	int pass;
	
	public:
				void readinputwritetofile()
   			{
		
						fstream filename;
			
						cout<<"Enter the number of  student : ";
						cin>>n;																//2
						
				
						filename.open("filename.txt" , ios::app | ios::out);   // file opem in write mode
					
						//filename<<"roll_No"<<","<<"standard"<<","<<"name"<<","<<"Subject"<<","<<"percentage"<<"\n";
					
					
						cout<<"Enter student details :\nid\tClass\tname\tsubject\tpercentage\n";
							for(i=0;i<n;i++)
							{
								
									cout<<"roll_No : ";
									cin>>roll_no;
									
									cout<<"\t";
									cout<<"\nSection: ";
									cin>>section;
									//cout<<"\t";
									cout<<"\nName : ";
									cin>>name;
								//	cout<<"\t";
									cout<<"\nphysics marks : ";
									cin>>p_marks;
									cout<<"\nchemistry marks : ";
									cin>>c_marks;
									cout<<"\nmaths marks : ";
									cin>>m_marks;
								
									
									filename<<roll_no<<" "<<section<<" "<<name<<" "<<p_marks<<" "<<c_marks<<" "<<m_marks<<" "<<"\n";
									
							
						    }
        }

        
                            void show()
							{
								cout << "\t\t\t\tDisplaying the Record" << endl;
								fstream filename;
									filename.open("filename.txt",ios::in);  //file opened in reading mode	
									int roll_no,p_marks,c_marks,m_marks,percentage;
									string name, section;	
						
										cout<<"\n"
											
											<<left<<setw(12)<<"roll_no"
											<<left<<setw(12)<<"section"
											<<left<<setw(12)<<"name"
											<<left<<setw(12)<<"p_marks"
											<<left<<setw(12)<<"c_marks"
											<<left<<setw(12)<<"m_marks"
											<<left<<setw(12)<<"percentage"
										<<"\n";
										
										filename>>roll_no>>section>>name>>p_marks>>c_marks>>m_marks;
										
										percentage =(p_marks +c_marks +m_marks) /3 ;
		
										  while (filename.eof()==0)
										{		
											cout<<left<<setw(12)<<roll_no
											<<left<<setw(12)<<section
											<<left<<setw(12)<<name
											<<left<<setw(12)<<p_marks
											<<left<<setw(12)<<c_marks
											<<left<<setw(12)<<m_marks
											<<left<<setw(12)<<percentage
											<<endl;
											filename>>roll_no>>section>>name>>p_marks>>c_marks>>m_marks;
											percentage =(p_marks +c_marks +m_marks) /3 ;
											
											}	
											filename.close();									
									}
								
									
						

									void percentagee()
									{
										
											cout << "\t\t\t\tDisplaying the result of student" << endl;
										fstream filename;
									filename.open("filename.txt",ios::in);  //file opened in reading mode	
									int roll_no,p_marks,c_marks,m_marks,percentage;
									string name, section;	
									string result;
										cout<<"\n"
											
											<<left<<setw(12)<<"roll_no"
											<<left<<setw(12)<<"section"
											<<left<<setw(12)<<"name"
											<<left<<setw(12)<<"p_marks"
											<<left<<setw(12)<<"c_marks"
											<<left<<setw(12)<<"m_marks"
											<<left<<setw(12)<<"percentage"
											<<left<<setw(12)<<"result"
										<<"\n";
										
										filename>>roll_no>>section>>name>>p_marks>>c_marks>>m_marks;
										
										percentage =(p_marks +c_marks +m_marks) /3 ;
										
										if(percentage >45 )
										result="pass";
										else
										result="Fail";
										  while (filename.eof()==0)
										{		
											cout<<left<<setw(12)<<roll_no
											<<left<<setw(12)<<section
											<<left<<setw(12)<<name
											<<left<<setw(12)<<p_marks
											<<left<<setw(12)<<c_marks
											<<left<<setw(12)<<m_marks
											<<left<<setw(12)<<percentage
											<<left<<setw(12)<<result
											<<endl;
											
											filename>>roll_no>>section>>name>>p_marks>>c_marks>>m_marks;
											percentage =(p_marks +c_marks +m_marks) /3 ;
											if(percentage >45 )
											result="pass";
											else
											result="Fail";
											
											
											}	
											filename.close();					
										
										
										
										
										
									}
									
									
									
										void passstudents()
									{
										
										 cout << "\t\t\t\tDisplaying the  students who are passed" << endl;
										fstream filename;
										filename.open("filename.txt",ios::in);  //file opened in reading mode	
										int roll_no,p_marks,c_marks,m_marks;
										string name, section;	
						
	
										
										filename>>roll_no>>section>>name>>p_marks>>c_marks>>m_marks;
										
										  while (filename.eof()==0)
										{	
										
										
										
										if(p_marks>=45 && c_marks>=45 && p_marks >=45)	
										
										{
												cout<<left<<setw(12)<<roll_no
											<<left<<setw(12)<<section
											<<left<<setw(12)<<name
											<<left<<setw(12)<<p_marks
											<<left<<setw(12)<<c_marks
											<<left<<setw(12)<<m_marks
							
											<<endl;
										}
											filename>>roll_no>>section>>name>>p_marks>>c_marks>>m_marks;
										}
											filename.close();				
										
										
									}
									
								
									void failstudents()
									{
										
										 cout << "\t\t\t\tDisplaying the  students who are fail" << endl;
										fstream filename;
										filename.open("filename.txt",ios::in);  //file opened in reading mode	
										int roll_no,p_marks,c_marks,m_marks;
										string name, section;	
						
	
										
										filename>>roll_no>>section>>name>>p_marks>>c_marks>>m_marks;
										
										  while (filename.eof()==0)
										{	
										
										
										
										if(p_marks<=45)	
										
										{
											cout<<"Fail in Physics";
												cout<<left<<setw(12)<<roll_no
											<<left<<setw(12)<<section
											<<left<<setw(12)<<name
											<<left<<setw(12)<<p_marks
											<<left<<setw(12)<<c_marks
											<<left<<setw(12)<<m_marks
							
											<<endl;
										}
											filename>>roll_no>>section>>name>>p_marks>>c_marks>>m_marks;
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
										
										void recheck()
										{
											
											
										}
										
										
								/*		void resultt()
                                    {
                                    
                                                cout << "\t\t\t\tSearching the Record" << endl;

											    int offset;
											    std::string se_name, line,word;
											    //file pointer
											    ifstream filee;
											    
											    filee.open("filename.txt");
											    
											    std::vector<string> row ;
											
											    //if (filee.is_open())
											    {
											
											        while (!filee.eof())
											        {
											            getline(filee, line);
											             cout<<"got the line";
											            
											            stringstream s  (line);
											            
											                cout<<"break the words";
											                cin.ignore();
        											            while (getline(s, word, ','))
        											            {
          
                                                                    // add all the column data
                                                                    // of a row to a std::vector<T> ;
                                                                    cout<<"Word formed is"<<word;
                                                                    row.push_back(word);
                                                                }
                                                                  cout<<"outside the the while";
                                                             int per = stoi(row[0]);
                                                        
                                                                if(per >50)
                                                              {  
                                                                cout<<"details of passed studnet are";
                                                                
                                                                cout<<line;
                                                              }
                                                      
											        }
											        
											        filee.close();
											    }
											    
                                    }	   */
    
                                
								


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
										
											
                                            cout << "\t\t\t-----------------------------" << endl;
                                            cout << "\t\t\t| STUDENT MANAGEMENT SYSTEM |" << endl;
                                            cout << "\t\t\t-----------------------------" << endl;
                                            cout << "\t\t\t 1. Enter New Record" << endl;
                                            cout << "\t\t\t 2. Display Record" << endl;
                                            cout << "\t\t\t 3. Show Result of All" << endl;
                                            cout << "\t\t\t 4. Search Record By Name" << endl;
                                            cout << "\t\t\t 5. Search Record by Id" << endl;
                                            cout << "\t\t\t 6. List of Pass Students\n";
                                            cout << "\t\t\t 7. List of Fail Students\n";
                                            cout << "\t\t\t 8. Exit from Program\n"
                                                 << endl;
                                        
                                            cout << "\t\t\t............................" << endl;
                                            cout << "\t\t\tChoose Options:[1/2/3/4/5/6]" << endl;
                                            cout << "\t\t\t............................" << endl;
                                            cout << " Enter Your Choice: ";
										
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
												  s.percentagee();
													break;
											
										
									
											case 4:
													
													system("cls");
													s.Searchbyname();
													break;
											
										
											case 5:
													system("cls");
													s.searchbyid();
													break;
											
							        		case 6: system("cls");
													s.passstudents();
													break;
													
											case 7: system("cls");
													s.failstudents();
													break;
							        		
											case 8: z = 1;
											
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




