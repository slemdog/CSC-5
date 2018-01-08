/* 
 * File:   main.cpp
 * Author: Selim Dogan
 * Created on November 14, 2017, 12:11 PM
 * Purpose:  Home Calculator Version 2
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
#include <iomanip>      //Format Library
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants
const int CNVMNYR=12;    //conversion months to year
const int CNVPERC=100;   //percent conversion
//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    const int SIZE=361;
    float intAccm[SIZE]={}, loanAmt[SIZE]={};
    float pPrice, pDown, intRate, mnPmt;
    short nMonths;
    
    //Initialize Variables
    pPrice=350000.00f;              //Purchase Price = $350k
    pDown=0.20f;                    //Percentage Down = 20%
    loanAmt[0]=pPrice*(1-pDown);       //Loan Amount $'s
    intRate=0.05f;                  //Interest Rate / YEar
    mnPmt=1503.11f;                 //Initialize the retirement account
    nMonths=360;                    //Number of months in loan payment
    
    //Process or map the inputs to the outputs
    cout<<"Home Amortization Table"<<endl<<endl;
    cout<<"Purchase Price  =  $"<<pPrice<<endl;
    cout<<"Percent Down    =      "<<pDown*CNVPERC<<"%"<<endl;
    cout<<"Loan Amount     =  $"<<loanAmt<<endl;
    cout<<"Interest Rate   =       "<<intRate*CNVPERC<<"%"<<endl;
    cout<<"Monthly Payment = $"<<mnPmt<<endl<<endl;
    cout<<"Month       Loan Amount   Int Paid   Payment"<<endl;
    cout<<fixed<<setprecision(2)<<showpoint;
    int month;
    for(month=0;month<nMonths;month++){
        intAccm[month]=intRate/12*loanAmt[month];  //Interest accrued per month
        loanAmt[month+1]=loanAmt[month]+(intAccm[month]-mnPmt);
    }
    for(month=0;month<nMonths;month++){
        cout<<setw(5)<<month<<setw(16)<<loanAmt[month]<<setw(12)<<intAccm[month]
            <<setw(11)<<mnPmt<<endl;
    }
    cout<<endl;
    cout<<"Last Payment = $"<<mnPmt+loanAmt[nMonths]<<endl;
    cout<<"Total Paid for Loan = $"<<nMonths*mnPmt+loanAmt[nMonths]<<endl;
    cout<<"Total Paid for Home = $"<<pPrice*pDown+nMonths*mnPmt+loanAmt[nMonths]<<endl;
    
    //Exit the program
    return 0;
}