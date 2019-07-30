#include<iostream>
#include<fstream>
#include<string>
using namespace std;


/* This code is designed to let the user display the contents of a page in the 
order of Name, SS#, Major, GPA, and Age.... The user can also choose to print text in the order of Major... The user should
also have the capabilities to print the file in descending order according to GPA */

void print1(); //Gives the user the choice to print the page without sorting 
void print2(); //Gives the user the option to print in the order of major
void print3(); //Gives the user the option to print in the order of descending in terms of the gpa
void print4(); //Gives the user the option to 
void grades(); 

int main() {
	
	int option; //This variable will allow the user to select a certain task from a menu of options
	
	
	ifstream  text; //file will be used to reference text.txt
	
	text.open ("text.txt");
	
	if(text.is_open()) {
		
		//Below are the choices for the user to pick from
		cout<<"Please select your next task....."<<endl;
		cout<<"\n1. Read text without sorting..."<<endl;
		cout<<"2. Read text in order of major"<<endl;
		cout<<"3. Read text in order of gpa"<<endl;
		cout<<"4. See number of students in each major and see how many people are in each gpa range:)"<<endl;
		cin>>option;
		cout<<"You have selected..."<<endl;
		cout<<option<<endl;
		
			switch(option) {      //This will switch the user to a specific funtion 
				
				case 1: cout<<"\nMoving to print1()"<<endl;
						print1();
				break;
				
				case 2: cout<<"\nMoving to print2() function"<<endl;
						print2();
				break;
				
				case 3: cout<<"\nMoving to print3() function"<<endl;
						//print3();
				break;
				
				case 4: cout<<"\nMoving on to print4() function"<<endl;
						print4();
				break;
				
				
				
			}
		
		
	}
	
	else cout<<"File is unable to open"<<endl; //Error message if file is unable to open
	
	
	
	system("PAUSE");
	return 0;
	
}



void print1() {
	
	ifstream text;
	text.open ("text.txt"); //file reference for text.txt
	
	string line; // this variable holds string values
	
	//Below we will display all of the text on the page, as long as the file opens
	if(text.is_open())
	{	
		while(getline(text, line )) {   //This while statement should display every line
		
			cout<<line<< "\n"<<endl;
		
		}
	}
	
	else{
		cout<<"File is unable to open"<<endl; //If the file is unable to open, this will bring up an error message
	}
} //End of print1 function



void print2() {
	
	int x=0, y=0, z=0;
	
	ifstream text;
	text.open ("text.txt"); //file reference for text.txt
	
	string name;   //Hold's student's name
	string ss;	   //Holds social security number
	string major;  //Hold's majors
	string gpa;    //hold's gpa
	string age;    //Hold's age
	string space;  // Hold's space
	
	



	
	
	if(text.is_open()) {
		
	  for (x=0; x<50; x++) {
		
		getline(text, name); 
		getline(text, ss); 		 
		getline(text, major);   
		getline(text, gpa);		
		getline(text, age);  
		getline(text, space);     
		
			
			if(major == "Comp Sci"){
				
						cout<<major<<"|"<<name<<"|"<<ss<<"|"<<gpa<<"|"<<age<<"|"<<space<<endl;
					
			}
		     
	    
	  } //End of for loop
		
		text.close();
		text.open ("text.txt");	
		
		for (y=0; y<50; y++){
			
			
			
		getline(text, name); 
		getline(text, ss); 		 
		getline(text, major);   
		getline(text, gpa);		
		getline(text, age);  
		getline(text, space);  
		
			if(major == "Physics"){
				
						cout<<major<<"| "<<name<<"| "<<ss<<"| "<<gpa<<"| "<<age<<"| "<<space<<endl;
				
			}	
		
		
		

		}
		
		text.close();
		text.open ("text.txt");	
		
		for (z=0; z<50; z++){
			
			getline(text, name); 
			getline(text, ss); 		 
			getline(text, major);   
			getline(text, gpa);		
			getline(text, age);  
			getline(text, space); 
			
				if(major == "Bus Admin"){
					
						cout<<major<<"| "<<name<<"| "<<ss<<"| "<<gpa<<"| "<<age<<"| "<<space<<endl;	
					
				}
			

		  }
		
		
		
	}
	
	
	
	else{        //This will display an error message if the file has trouble opening
		
		cout<<"File is unable to open"<<endl;
	}
	
	
	
	
	
} // End of print2 fuction





/*void print3() {
	
	int x=0;
	
	ifstream text;
	text.open ("text.txt"); //file reference for text.txt
	
	string name;   //Hold's student's name
	string ss;	   //Holds social security number
	string major;  //Hold's majors
	string gpa;    //hold's gpa
	string age;       //Hold's age
	string space; // Hold's space
	
	
	if(text.is_open()){
		
		getline(text, name); 
		getline(text, ss); 		 
		getline(text, major);   
		getline(text, gpa);		
		getline(text, age);  
		getline(text, space); 
		
		cout<<major<<"|"<<name<<"|"<<ss<<"|"<<gpa<<"|"<<age<<"|"<<space<<endl;
			
		
		for (x=0; x<49; x++) {
		
		getline(text, name); 
		getline(text, ss); 		 
		getline(text, major);   
		getline(text, gpa2);		
		getline(text, age);  
		getline(text, space);     
		
		
			if(gpa < gpa2) {
			
				cout<<major<<"|"<<name<<"|"<<ss<<"|"<<gpa2<<"|"<<age<<"|"<<space<<endl;
			
						} // End of If statement
			
	    
			else{
				
				
				
				getline(text, name); 
				getline(text, ss); 		 
				getline(text, major);   
				getline(text, gpa);		
				getline(text, age);  
				getline(text, space);     
		
				
				
						} //End of else
		
	  } //End of for loop
		
		
		
		
	}
	
	
	else{
		cout<<"The program is not opening correctly"<<endl;
	    }
	
	
	
	
	
	
	
}// End of print3 function

*/



void print4() {
	
	int comp_count=0; //This counter keeps track of people in computer science
	int busdrivers=0;
	int physics=0; // physics counter
	
	ifstream  text;
	text.open ("text.txt");
	
	string name;   //Hold's student's name
	string ss;	   //Holds social security number
	string major;  //Hold's majors
	string gpa;    //hold's gpa
	string age;       //Hold's age
	string space; // Hold's space
	
	
	
	
	if (text.is_open()){
		
		for(int x = 0; x < 50; x++){
			
				getline(text, name); 
				getline(text, ss); 		 
				getline(text, major);   
				getline(text, gpa);		
				getline(text, age);  
				getline(text, space);  
			
				
				
				
				
				
				
				
				
				if ( major == "Comp Sci") {
					
					comp_count++;
					
					
				}
			
				else if( major == "Bus Admin"){
					
					busdrivers++;
					
				}
			
			
				else if( major == "Physics"){
					
					physics++;
				}
			
			
		}
		
		
		
		cout<<"The total number of computer science majors is "<<comp_count<<endl;
		cout<<"The total number of bus drivers is "<<busdrivers<<endl;
		cout<<"The total number of physics is "<<physics<<endl;
		
		
	}
	
	else {
		
		cout<<"The file will not open :("<<endl;
	}
	
	
	
	// This portion of the 4th function will calculate the gpa grade ranges
	

		grades();

	
}






void grades() {
	// Determine 2-3, 3-3.5, 3.6-4 gpas
	
	cout<<"\n\nCalculating gpa scores...."<<endl;
	
	ifstream   text;
	text.open("text.txt");
	
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