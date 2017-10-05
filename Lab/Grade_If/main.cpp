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
    if (score>100||score<0) grade='I';
    if (score<=100&&score>=90) grade='A';
    if (score<90&&score>=80) grade='B';
    if (score<80&&score>=70) grade='C';
    if (score<70&&score>=60) grade='D';
    if (score<60&&score>=0) grade='F';

    //Display/Output all the pertinent variables
    cout<<"A score of "<<score<<" gives a grade = "<<grade<<endl;

    //Exit the program
    return 0;
}
