/* 
 * File:   main.cpp
 * Author: Selim Dogan
 * Created on September 17, 2017, 7:44 PM
 * Purpose: Calculate the amount of distance the car can travel givel mpg and tank capacity
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
    unsigned short tank;	//gas tank capacity, entered by user
    float hmpg,			//highway average mpg, entered by user
	  tmpg,			//town average mpg, entered by user
	  hdist,		//total distance in miles in highway
   	  tdist;		//total distance in miles in town

    //Input Data/Variables
    cout<<"Enter your car's gas tank capacity in gallons: "<<endl;
    cin>>tank;
    cout<<"Enter your average miles per gallon while driving in town: "<<endl;
    cin>>tmpg;
    cout<<"Enter your average miles per gallon while on the highway: "<<endl;
    cin>>hmpg;

    //Process or map the inputs to the outputs
    tdist = tank*tmpg;	//town distance calculation
    hdist = tank*hmpg;	//highway distance calculation

    //Display/Output all the pertinent variables
    cout<<endl<<"Your car can hold "<<tank<<" gallons of gas, has an mpg of "<<tmpg<<" while"
    	<<" driving in town, and an mpg of "<<hmpg<<" while driving on the highway."<<endl;
    cout<<endl<<"You can drive "<<tdist<<" miles in town and "<<hdist
    	<<" miles on the highway on one tank of gas."<<endl;

    //Exit the program
    return 0;
}
