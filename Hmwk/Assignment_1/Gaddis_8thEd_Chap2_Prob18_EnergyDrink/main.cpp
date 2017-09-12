/* 
 * File:   main.cpp
 * Author: Selim Dogan
 * Created on September 12, 2017, 12:06 PM
 * Purpose: to calculate number of energy drinks per week given percentage of 
 *          customers who drink 1 or more per week
 */

//System Libraries
#include <iostream>       //Input/Output Stream Library
using namespace std;    //Standard Name-Space under which System Libraries Reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants
const unsigned char CNVPERC = 100;
//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Known Variables
    unsigned short survey = 16500;    //number of customers surveyed
    unsigned char pDrink = 15,        //percentage of surveyed who drink 1+ per week
                    pCitrus = 58;      //percentage of drinkers who prefer citrus
    
    //unknown variables to calculate
    unsigned short nDrink,          //minimum number of energy drinks per week
                     nCitrus;         //minimum number of citrus drinks per week
            
    //Initialize Variables
    
    //Input Data/Variables
    
    //Process or map the inputs to the outputs
    nDrink = survey*pDrink/CNVPERC;     //calculate number of drinks per week
    nCitrus = nDrink*pCitrus/CNVPERC;   //calculate number of citrus e drinks per week
    
    //Display/Output all the pertinent variables
    cout<<"Number of customers surveyed: "<<survey<<endl;
    cout<<"Percentage of customers who drink 1+ per week: "
            <<static_cast<int>(pDrink)<<"%"<<endl;
    cout<<"Percentage of customers who drink citrus instead: "
            <<static_cast<int>(pCitrus)<<"%"<<endl;
    cout<<endl<<"Minimum number of energy drinks sold per week: "<<nDrink<<endl;
    cout<<"Minimum number of citrus energy drinks sold per week: "<<nCitrus<<endl;
    
    //Exit the program
    return 0;
}