/* 
 * File:   main.cpp
 * Author: Selim Dogan
 * Created on September 5, 2017, 12:16 PM
 * Purpose: to calculate gas tax percentage per gallon
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
    float pp = 2.93f,        //price at the pump
           ft = 0.184f,      //federal gas tax paid
           st = 0.36f,       //state gas tax paid
           op = 0.07f,       //oil company profit amount per gallon
           pctsst = 8.0f,    //sales tax percentage
           bp,               //base price
           sst,              //state sales paid
           tt,               //total tax paid
           pctop,            //percentage profit oil companies make per gallon
           pcttax;           //percentage of total tax per gallon

    //Process or map the inputs to the outputs
    bp = (pp-ft-st)/(1+pctsst/100);   //base price calculation
    tt = pp-bp;                       //total tax calculation
    sst = bp*pctsst/100;              //state sales tax paid calculation
    pcttax = tt/bp*100;               //percentage of tax paid calculation
    pctop = op/bp*100;                //percentage profit for oil companies
    
    //Display/Output all the pertinent variables
    cout<<"Price at the pump: $"<<pp<<endl;
    cout<<"Federal gas tax: $"<<ft<<endl;
    cout<<"State gas tax: $"<<st<<endl;
    cout<<"Oil company profit per gallon: $"<<op<<endl;
    cout<<"Sales tax percentage: "<<pctsst<<"%"<<endl<<endl;
    cout<<"Base price per gallon (pre tax): $"<<bp<<endl;
    cout<<"State sales tax paid: $"<<sst<<endl;
    cout<<"Total tax paid : $"<<tt<<endl;
    cout<<"Percentage of total tax per gallon: "<<pcttax<<"%"<<endl;
    cout<<"Percentage of oil company profit per gallon: "<<pctop<<"%"<<endl;
    
    //Exit the program
    return 0;
}