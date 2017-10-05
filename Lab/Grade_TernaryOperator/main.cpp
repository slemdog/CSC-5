/* 
 * File:   main.cpp
 * Author: Selim Dogan
 * Created on September 28, 2017, 11:43 AM
 * Purpose: grading assignments
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
    short score;	//score for assignment 0-100
    char grade;
 
    //Initialize Variables with an input
    cout<<"Input the score from the assignment"<<endl;
    cout<<"A value from 0 to 100"<<endl;
    cin>>score;

    //Process or map the inputs to the outputs
    grade=score>100?'I':
	  score>=90?'A':
	  score>=80?'B':
	  score>=70?'C':
	  score>=60?'D':
	  score>=0?'F':'I';

    //Display/Output all the pertinent variables
    cout<<"A score of "<<score<<" gives a grade = "<<grade<<endl;
    //Exit the program
    return 0;
}
