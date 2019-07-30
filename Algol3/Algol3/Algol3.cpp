#include<iostream>
#include<fstream>
#include<string>
using namespace std;


/* The following program will do :
1. Read the elements of a list
2. Organize and print them in the following ways: a) in terms of the major
                                                  b) in terms of the GPA
												  c) number of students in a certain GPA range*/

void NormalList(); //Allows the user to print the data as it is.
void Major(); //Allows the user to print the list in order of the major selected
//void GPAscores(); //Allows the user to print the list in order of the Number of the GPA
void GPAnumbers(); //Allows the user to print the list in order of the GPA
void grades();
int main() {
	
	int option; //This variable will allow the user to select a certain task from a menu of options
	
	
	ifstream  MyFile; //file will be used to reference text.txt
	
	MyFile.open ("student-data.txt");
	
	if(MyFile.is_open()) {
		
		//Below are the choices for the user to pick from
		cout<<"Please select your next task....."<<endl;
		cout<<"\A. Read text without sorting..."<<endl;
		cout<<"B. Read text in order of major"<<endl;
		cout<<"C. Read text in order of gpa"<<endl;
		cout<<"D. See number of students in each major and see how many people are in each gpa group"<<endl;
		cin>>option;
		cout<<"Choice"<<endl;
		cout<<option<<endl;
		
			if ( option =" A")
			{
						NormalList();
			}	
				
			else if ( option =" B")
			{
						Major();
			}	
				
			else if ( option =" C ")
			{
						GPAscores();
			}	
				
			else if ( option =" D")
			{
						GPAnumbers();
			}	
				
				
			
		
		
	}
	
	else cout<<"File is unable to open"<<endl; //Error message if file is unable to open
	
	
	
	system("PAUSE");
	return 0;
	
}



void NormalList() {
	
	ifstream MyFile;
	MyFile.open ("student-data.txt"); //file reference for text.txt
	
	string line; // this variable holds string values
	
	//Below we will display all of the text on the page, as long as the file opens
	if(MyFile.is_open())
	{	
		while(getline(MyFile, line )) {   //This while statement should display every line
		
			cout<<line<< "\n"<<endl;
		
		}
	}
	
	else{
		cout<<"File is unable to open"<<endl; //If the file is unable to open, this will bring up an error message
	}
} //End of print1 function



void Major() {
	
	int a=0, b=0, c=0;
	
	ifstream MyFile;
	MyFile.open ("student-data.txt"); //file reference for text.txt
	
	string Name;   //Hold's student's name
	string SocialS;	   //Holds social security number
	string Majors;  //Hold's majors
	string GPA;    //hold's gpa
	string Age;    //Hold's age
	string Space;  // Hold's space
	
	



	
	
	if(MyFile.is_open()) {
		
	  for (a=0; a<50; a++) {
		
		getline(MyFile, Name); 
		getline(MyFile, SocialS); 		 
		getline(MyFile, Majors);   
		getline(MyFile, GPA);		
		getline(MyFile, Age);  
		getline(MyFile, Space);     
		
			
			if(Majors == "Comp Sci"){
				
						cout<<Majors<<"|"<<Name<<"|"<<SocialS<<"|"<<GPA<<"|"<<Age<<"|"<<Space<<endl;
					
			}
		     
	    
	  } //End of for loop
		
		MyFile.close();
		MyFile.open ("student-data.txt");	
		
		for (b=0; b<50; b++){
			
			
			
		getline(MyFile, Name); 
		getline(MyFile, SocialS); 		 
		getline(MyFile, Majors);   
		getline(MyFile, GPA);		
		getline(MyFile, Age);  
		getline(MyFile, Space);  
		
			if(Majors == "Physics"){
				
						cout<<Major<<"| "<<Name<<"| "<<SocialS<<"| "<<GPA<<"| "<<Age<<"| "<<Space<<endl;
				
			}	
		
		
		

		}
		
		MyFile.close();
	    MyFile.open ("student-data.txt");	
		
		for (c=0; c<50; c++){
			
			getline(MyFile, Name); 
			getline(MyFile, SocialS); 		 
			getline(MyFile, Majors);   
			getline(MyFile, GPA);		
			getline(MyFile, Age);  
			getline(MyFile, Space); 
			
				if(Majors == "Bus Admin"){
					
						cout<<Majors<<"| "<<Name<<"| "<<SocialS<<"| "<<GPA<<"| "<<Age<<"| "<<Space<<endl;	
					
				}
			

		  }
		
		
		
	}
	
	
	
	else{        //This will display an error message if the file has trouble opening
		
		cout<<"File is unable to open"<<endl;
	}
	
	
	
	
	
} // End of print2 fuction





/*void GPAScores() {

int main (void) {
	string search;
	int offset, count;
	string line;


	ifstream MyFile;
	MyFile.open ("text.txt");
	cout << "The file has been opened" << endl;
	cout << "Enter the GPA that you want to enquire about"<< endl;
	cin >> search;

	if (MyFile.is_open())
	{
		while (!MyFile.eof())
		{
			getline(MyFile, line);
			if ((offset = line.find(search, 0))) 
			{
				count = count ++;
			}
		cout << count;
		}
		MyFile.close();
	}
	else {
		cout << "There was an error"<< endl;
		system("PAUSE");
	}

		return 0;
	}



*/



void GPAnumbers() {
	
	int CScount=0; //This counter keeps track of people in computer science
	int Business=0;
	int Physics=0; // physics counter
	
	ifstream  MyFile;
	MyFile.open ("student-data.txt");
	
	string Name;   //Hold's student's name
	string SocialS;	   //Holds social security number
	string Majors;  //Hold's majors
	string GPA;    //hold's gpa
	string Age;       //Hold's age
	string Space; // Hold's space
	
	
	
	
	if (MyFile.is_open()){
		
		for(int x = 0; x < 50; x++){
			
				getline(MyFile, Name); 
				getline(MyFile, SocialS); 		 
				getline(MyFile, Majors);   
				getline(MyFile, GPA);		
				getline(MyFile, Age);  
				getline(MyFile, Space);  
			
				
				
				
				
				
				
				
				
				if ( Majors == "Comp Sci") {
					
					CScount++;
					
					
				}
			
				else if( Majors == "Bus Admin"){
					
					Business++;
					
				}
			
			
				else if( Majors == "Physics"){
					
					Physics++;
				}
			
			
		}
		
		
		
		cout<<"The total number of computer science majors is "<<CScount<<endl;
		cout<<"The total number of bus drivers is "<<Business<<endl;
		cout<<"The total number of physics is "<<Physics<<endl;
		
		
	}
	
	else {
		
		cout<<"The file will not open :("<<endl;
	}
	
	
	

		grades();

	
}






void grades() {
	// Determine 2-3, 3-3.5, 3.6-4 gpas
	
	cout<<"\n\nCalculating gpa scores...."<<endl;
	
	ifstream   text;
	text.open("student-data.txt");
	
	string name;   //Hold's student's name
	string ss;	   //Holds social security number
	string major;  //Hold's majors
	string gpa;    //hold's gpa
	string age;       //Hold's age
	string space; // Hold's space
	         
	int gpa_counter1=0;   //for gpa scores 2-print
	
	
	//The function below calculates gpa numbers for gpa scores 2-3
	for(int x=0; x < 50; x++){
		
				getline(text, name); 
				getline(text, ss); 		 
				getline(text, major);   
				getline(text, gpa);		
				getline(text, age);  
				getline(text, space); 
			
			
			if(gpa < "3" || gpa > "2"){
				
				
				gpa_counter1++;
				
			}
								
	}
	
	
	
	
	cout<<"GPA Scores (2-3): "<< gpa_counter1<<endl;
	
	
}