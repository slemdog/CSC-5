/* 
 * File:   main.cpp
 * Author: Selim Dogan
 * Created on Septmber 16, 2017, 7:43 PM
 * Purpose: calculate the total monetary value given the amount of coins
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
    float penny  = 0.01,	//monetary value of a penny
    	  nickel = 0.05,	//monetary value of a nickel
	  dime	 = 0.10,	//monetary value of a dime	
	  quart  = 0.25,	//monetary value of a quarter 	
	  kenn	 = 0.50,	//monetary value of a half dollar 	
	  doll	 = 1.00,	//monetary value of a dollar coin
	  total;		//total monetary value 	
    
    unsigned short npenny(0),	//number of pennies initialized to 0 
    		   nnick(0),	//number of nickels initialized to 0
		   ndime(0),	//number of dimes initialized to 0
		   nquart(0),	//number of quarters initialized to 0
		   nkenn(0),	//number of half dollars initialized to 0
		   ndoll(0);	//number of dollar coins initialized to 0

    //Input Data/Variables
    //Input instructions for the user
    cout<<"Enter the amount of pennies, nickels, dimes, quarters, half-dollars, and dollar coins"<<endl
    	<<"on the same line separated by spaces (6 inputs total):"<<endl;
    
    //Input to variables on a single line 
    cin>>npenny>>nnick>>ndime>>nquart>>nkenn>>ndoll; 
    
    //making total equal to the sum of the coin values multiplied by coin amounts
    total = (npenny*penny) + (nnick*nickel) + (ndime*dime) + (nquart*quart) + (nkenn*kenn) + (ndoll*doll);

    //Display/Output all the pertinent variables
    cout<<endl<<"You have: "<<endl;
    cout<<"	"<<npenny<<" pennies"<<endl
	<<"	"<<nnick<<" nickels"<<endl
	<<"	"<<ndime<<" dimes"<<endl
	<<"	"<<nquart<<" quarters"<<endl
	<<"	"<<nkenn<<" half-dollars"<<endl
	<<"	"<<ndoll<<" dollar coins"<<endl;
    cout<<"$"<<total<<" total"<<endl;

    //Exit the program
    return 0;
}
