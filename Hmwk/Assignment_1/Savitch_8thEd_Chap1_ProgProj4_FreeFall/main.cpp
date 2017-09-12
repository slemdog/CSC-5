/* 
 * File:   main.cpp
 * Author: Selim Dogan
 * Created on September 12, 2017, 12:36 PM
 * Purpose: calculate distance in free fall given gravity in feet and time in 
 *          seconds.
 */

//System Libraries
#include <iostream>       //Input/Output Stream Library
using namespace std;    //Standard Name-Space under which System Libraries Reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants
const float GRAV_FT = 32.174f;   //Gravity constant on Earth in ft/s^2
const float FT_M = 3.28f;        //Conversion from feet to meters

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float time,  //time in seconds
            distft, //distance fallen in free fall in ft
            distm,  //distance fallen in free fall in meters
            gravm;  //gravity constant in meters
    
    //Initialize Variables
    
    //Prompt the user for input
    cout<<"Input the time in seconds: "<<endl;  
    cin>>time;
    
    //Process or map the inputs to the outputs
    distft = GRAV_FT*time*time/2;        //calculate distance fallen as 1/2*gt^2
    distm = GRAV_FT/FT_M*time*time/2;    //calculate distance in meters 
    gravm = GRAV_FT/FT_M;                   //calculate gravity in meters
    
    //Display/Output all the pertinent variables
    cout<<endl<<"Gravitational acceleration on Earth in feet: "<<GRAV_FT
            <<" ft/s^2"<<endl;
    cout<<"Gravitational acceleration on Earth in meters: "<<gravm
            <<" m/s^2"<<endl;
    cout<<"Feet per meter: "<<FT_M<<endl;
    cout<<"Time fallen: "<<time<<" seconds"<<endl;
    cout<<"Distance fallen in feet: "<<distft<<endl;
    cout<<"Distance fallen in meters: "<<distm<<endl;
            
    //Exit the program
    return 0;
}