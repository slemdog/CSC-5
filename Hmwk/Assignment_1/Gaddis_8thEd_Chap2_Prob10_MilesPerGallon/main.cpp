/* 
 * File:   main.cpp
 * Author: Selim Dogan
 * Created on September 17, 2017, 8:32 PM
 * Purpose: to calculate miles per gallon given tank capacity and travel distance
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
    unsigned short tank,	//tank capacity
    		   dist;	//distance driven
    float mpg;			//miles per gallon
    
    //Input Data/Variables
    cout<<"Enter your car's gas capacity in gallons:"<<endl;
    cin>>tank;
    cout<<"Enter the distance you can drive before refueling in miles:"<<endl;
    cin>>dist;

    //Process or map the inputs to the outputs
    mpg = static_cast<float>(dist)/tank;

    //Display/Output all the pertinent variables
    cout<<"\nYour car can hold "<<tank<<" gallons of gas and drive "<<dist<<" miles before refueling.\n";
    cout<<"Your car has an average mpg of "<<mpg<<".";

    //Exit the program
    return 0;
}
