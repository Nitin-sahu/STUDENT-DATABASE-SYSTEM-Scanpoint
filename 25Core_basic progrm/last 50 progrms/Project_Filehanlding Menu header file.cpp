#include<iostream>
#include<fstream>
#include<string.h>
#include<stdlib.h>
using namespace std;
/*
Input= choice,
Output= menu progrms 
1 list of all functionality
2- show progrm
3-Add  in file
4-find percentage of students 
*/

void readinputwritetofile()
{
			

					int n;
			
				fstream filename;
			
						cout<<"Enter the number of  student : ";
						cin>>n;																//2
						
					int id[10],i;														//id0 id1
					int standard[10];
					string name[10];
					string subject[10];	
					int percentage[10];
					int fail[10];
					int pass[10];		
						filename.open("filename.txt" , ios::out);   // file opem
					
					filename<<"ID"<<","<<"Class"<<","<<"Name"<<","<<"Subject"<<","<<"Percentage"<<"\n";
					
					
						cout<<"Enter student details :\nid\tClass\tname\tsubject\tPercentage\n";
							for(i=0;i<n;i++)
							{
								
									cout<<"ID : ";
									cin>>id[i];
									//cout<<"\t";
									cout<<"\nClass : ";
									cin>>standard[i];
									//cout<<"\t";
									cout<<"\nName : ";
									cin>>name[i];
								//	cout<<"\t";
									cout<<"\nSubject : ";
									cin>>subject[i];	
									cout<<"\nPercentage : ";													// id0
									cin>>percentage[i];
									
									system("cls");
										if(percentage[i]  < 33)
									{
										fail[i]=percentage[i];	
									}
									else
									{
									
										pass[i]=percentage[i];
									}
								
									
									filename<<id[i]<<","<<standard[i]<<","<<name[i]<<","<<subject[i]<<","<<percentage[i]<<"\n";
									
									//	filename.open("filename.txt" , ios::out);
					
								//	filename<<id[i]<<"\t\t"<<Class[i]<<name[i]<<"\t\t"<<subject;
							
						}
}

void show()
{
		cout << "\t\t\t\tDisplaying the Record" << endl;
		
		int i;
		
		
		fstream filename;

			filename.open("filename.txt", ios::in);  //file opened in reading mode
			
			string x;
		
			while(1)
			{
					filename>>x;
				
					
					
					
				for(i=0;i<x.length();i++)
				{
					if( x.at(i) == 44)
					{
						cout<<"\t\t\t";
						i=i+1;
					}
				
					cout<<x.at(i);										//Printing character by character
				}
					
					if(x.find("\n"))
					cout<<"\n";
			
				if(filename.eof())
				break;
				
				
			}
			
			filename.close();

   /* int offset,i,pos;
    std::string se_id, se_name, se_email, se_home, se_clas, se_tele, se_cell, se_sec, se_gender, line;
    ifstream filee;
    filee.open("filename.txt");
     //cout << "\nType name of student you want to search:";
   // cin >> se_name;
   // cout << "\nType id of student you want to search:";
   // cin >> se_id;
   se_gender=",";
    if (filee.is_open())
    {
			 cout<<line;
        while (!filee.eof())
        {
        	
            getline(filee, line);
           
            
            
			for(i=0;i<line.length();i++)
            {
	           //pos=line.find(se_gender);
				if(line.at(i)==44)
				{
					cout<<"  ";
				}
				if(line.at(i)=='\n
				{
					cout<<"\n";
				}
				
				cout<<line.at(i);
			}
	           
           
            
        }
        
        filee.close();
    }
    else
    {
        cout << "search not found";
    }/*

	
		
}

/*void percentage(int n,int percentage[i])
{
		int percentage[2];
		int fail[5];
		int pass[5],i;	
		for(i=0;i<n;i++)
		{
						if(percentage[i] < 33)
						{
								fail[i]=[i];	
						}
						else
						{
						
							pass[i]=[i];
						}
		}
			
					
}*/



}


void appendtofile()
{

	int n;

	fstream filename;

			cout<<"Enter the number of  student : ";
			cin>>n;																//2
			
		int id[10],i;														//id0 id1
		int standard[10];
		string name[10];
		string subject[10];	
		int percentage[10];
		int fail[10];
		int pass[10];		
			filename.open("filename.txt" , ios::app);   // file opem
		
		//filename<<"ID"<<","<<"Class"<<","<<"Name"<<","<<"Subject"<<","<<"Percentage"<<"\n";
		
		
			cout<<"Enter details ";
				for(i=0;i<n;i++)
				{
					
						cout<<"ID : ";
						cin>>id[i];
						//cout<<"\t";
						cout<<"\nClass : ";
						cin>>standard[i];
						//cout<<"\t";
						cout<<"\nName : ";
						cin>>name[i];
					//	cout<<"\t";
						cout<<"\nSubject : ";
						cin>>subject[i];	
						cout<<"\nPercentage : ";													// id0
						cin>>percentage[i];
						
						system("cls");
							if(percentage[i]  < 33)
						{
							fail[i]=percentage[i];	
						}
						else
						{
						
							pass[i]=percentage[i];
						}
					
						
						filename<<id[i]<<","<<standard[i]<<","<<name[i]<<","<<subject[i]<<","<<percentage[i]<<"\n";
						
						//	filename.open("filename.txt" , ios::out);
		
					//	filename<<id[i]<<"\t\t"<<Class[i]<<name[i]<<"\t\t"<<subject;
				
			}
}

void searchbyname()
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



