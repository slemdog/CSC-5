/* 
 * File:   main.cpp
 * Author: Selim Dogan
 * Created on September 24, 2017, 7:47 PM
 * Purpose: determine whether or not a building is in violation of fire codes
 */

//System Libraries
#include <iostream>       //Input/Output Stream Library
using namespace std;    //Standard Name-Space under which System Libraries Reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    unsigned short maxCap,	//maximum capacity of the room
		   attend,	//attendees to the meeting
		   people;	//people that can be added/removed
    char loop;

    do {
   	 //Input Data/Variables
   	 cout<<"Enter the maximum capacity of the meeting room: "<<endl;    
   	 cin>>maxCap;
   	 cout<<"Enter the number of people attending the meeting:"<<endl;
   	 cin>>attend;
   	 
   	 switch (attend>maxCap){
   	     case 1: cout<<endl<<"You can not hold the meeting in this room due to fire regulations."<<endl;
   	     	people=attend-maxCap; 
   	     	cout<<"You need to exclude "<<people
   	     	    <<((people==1)?" person.":" people.")<<endl;
   	     	break;

   	     default: cout<<endl<<"It is legal to hold the meeting in this room."<<endl;
   	     	 people=maxCap-attend;
   	     	 cout<<"You can invite "<<people<<" extra "
   	     	     <<((people==1)?"person.":"people.")<<endl;
   	     	 break;
   	 }
   	 
   	 cout<<endl<<"Would you like to repeat the calculation? (y/n)"<<endl;
   	 cin>>loop;
   	 cout<<endl;
    }

    while (loop=='y');
    //Display/Output all the pertinent variables
    
    //Exit the program
    return 0;
}
