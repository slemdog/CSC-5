/* 
 * File:   main.cpp
 * Author: Selim Dogan
 * Created on September 24, 2017, 9:57 PM
 * Purpose: convert the temperature from celsius to farenheit
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
    float tempC,	//temperature in celsius
	  tempF;	//temperature in farenheit
    
    //Input Data/Variables
    cout<<"Enter the temperature in Celsius: ";
    cin>>tempC;
     
    //Process or map the inputs to the outputs
    tempF=(9.0f/5)*tempC+32;

    //Display/Output all the pertinent variables
    cout<<endl<<"Temperature: "<<tempC<<" degrees Celsius"<<endl;
    cout<<"             "<<tempF<<" degrees Farenheit"<<endl;
    
    //Exit the program
    return 0;
}
