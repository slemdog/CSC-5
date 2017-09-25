/* 
 * File:   main.cpp
 * Author: Selim Dogan
 * Created on September 24, 2017, 10:07 PM
 * Purpose: to calculate the number of widgets on a pallet given pallet weight
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
    float widW = 12.5,		//widget weight
	  pWeigh,		//pallet weight
	  totW;			//total weight
    int   nWidg;	//number of widgets on the pallet

    //Input Data/Variables
    cout<<"How much does the pallet weigh by itself? (in pounds)"<<endl;
    cin>>pWeigh;
    cout<<"How much does the pallet weigh with the widgets on it? (in pounds)"<<endl;
    cin>>totW;

    //Process or map the inputs to the outputs
    nWidg = (totW-pWeigh)/widW;

    //Display/Output all the pertinent variables
    cout<<endl<<"The pallet weighs "<<pWeigh<<" lbs by itself."<<endl;    
    cout<<"It weighs "<<totW<<" lbs with the widgets on it."<<endl;
    cout<<"There are "<<nWidg<<" widgets on the pallet."<<endl;

    //Exit the program
    return 0;
}
