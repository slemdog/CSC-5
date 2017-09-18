/* 
 * File:   main.cpp
 * Author: Selim Dogan
 * Created on September 17, 2017, 9:19 PM
 * Purpose: to calculate ocean level incease given years from now
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
    float mmpYear = 15e-1f,	//amount that the ocean level rises per year
    	  ocLevel;		//amount the ocean level rose
    int years;			
           
    //Input Data/Variables
    cout<<"Enter the years from now: "<<endl;
    cin>>years;

    //Process or map the inputs to the outputs
    ocLevel = years*mmpYear;

    //Display/Output all the pertinent variables
    cout<<"\nThe ocean level rises by "<<mmpYear<<" millimeters per year."<<endl;
    cout<<"In "<<years<<" years the ocean level will be "<<ocLevel<<" millimeters higher than it is now."<<endl;
    //Exit the program
    return 0;
}
