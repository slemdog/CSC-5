/* 
 * File:   main.cpp
 * Author: Selim Dogan
 * Created on August 31, 2017, 12:35 AM
 * Purpose: Stock purchase
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
using namespace std;    //Standard Name-Space under which System Libraries Reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    short nShares;      //number of shares per stock
    float ppShr,fee;    //Price per share in $/share and fee as a percent
    float shrCost,comPaid,totPaid;  //in $'s: share cost, com paid, and total paid
    
    //Initialize Variables
    nShares=750;
    ppShr=35;
    fee=2;
    
    //Process or map the inputs to the outputs
    shrCost=nShares*ppShr;
    comPaid=shrCost*fee/100; //Convert percentage to decimal
    totPaid=shrCost+comPaid;
    
    //Display/Output all the pertinent variables
    cout<<"Number of shares  = "<<nShares<<endl;
    cout<<"Share price       = $"<<ppShr<<"/share"<<endl;
    cout<<"Commission fee    = "<<fee<<"%"<<endl;
    cout<<"Cost of shares    = $"<<shrCost<<endl;
    cout<<"Commission paid   = $"<<comPaid<<endl;
    cout<<"Total amount paid = $"<<totPaid<<endl;
    
    //Exit the program
    return 0;
}