/* 
 * File:   main.cpp
 * Author: Selim Dogan
 * Created on September 21, 2017, 11:38 AM
 * Purpose: to calculate how many cans of diet coke someone can drink without dying
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
    unsigned char  mMouse(35),		//mass of the mouse in grams
	  	   mKill(5);		//mass of sweetener required to kill a mouse in grams
    unsigned short mCoke(350),		//mass of a can of coke in grams
		   hWeight;		//weight of human in pounds
    float	   conCoke(.001),	//concentration of sweetener in a can of coke
		   hKill,		//amount of cans it will take to kill a human
		   cnvPTG(1/453.5);	//given conversion of pounds to grams

    //Input Data/Variables
    cout<<"Enter your target weight: "<<endl;
    cin>>hWeight;
    
    //Process or map the inputs to the outputs
    hKill = (hWeight*static_cast<float>(mKill)/mMouse)/(mCoke*conCoke*cnvPTG);
    //Display/Output all the pertinent variables
    cout<<endl<<"Mass of the mouse: "<<static_cast<int>(mMouse)<<" grams"<<endl
    	<<"Mass of sweetener required to kill mouse: "
	<<static_cast<int>(mKill)<<" grams"<<endl
   	<<"Mass of a can of coke: "<<mCoke<<" grams"<<endl
	<<"Concentration of sweetener in a coke can: "<<conCoke*100<<"%"<<endl
	<<"Target weight of human: "<<hWeight<<" lbs"<<endl
	<<"Cans of coke required to kill human: "<<hKill<<endl; 

    //Exit the program
    return 0;
}
