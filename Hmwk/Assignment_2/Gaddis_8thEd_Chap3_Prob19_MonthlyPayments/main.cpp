/* 
 * File:   main.cpp
 * Author: Selim Dogan
 * Created on September 19, 2017, 11:40 AM
 * Purpose: to calculate the monthly payment on a loan
 */

//System Libraries
#include <iostream>       //Input/Output Stream Library
#include <cmath>	//math library for C
using namespace std;    //Standard Name-Space under which System Libraries Reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants
const unsigned char CNVMPYR = 12;	//conversion of years to months
const unsigned char CNVPERC = 100;	//conversion to percent
 
//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    unsigned char  nCPer(36);	//number of compounding periods
    int loan(10000);		//initial loan amount
    float intRate(12.0f),	//monthly interest rate
	  totpaid,		//total amount paid
	  intpaid,		//interest paid
	  mPay;			//monthly payment
    
    //Process or map the inputs to the outputs
    intRate /= (CNVMPYR*CNVPERC);	 //convert interest rate to per month and percent 
    float intr = exp(nCPer*log(1+intRate));	//intermediate value
    mPay = intRate*intr/(intr-1)*loan;		//monthly pay calculation
    mPay = static_cast<int>(mPay*100)/100.0f;	//reduce decimal places to 2
    totpaid = mPay*nCPer;			//total amount paid
    intpaid = totpaid-loan;			//interest paid on the loan

    //Display/Output all the pertinent variables
    cout.setf(ios::fixed);
    cout.precision(2);
    cout<<"Initial loan amount: $"<<loan<<endl
	<<"Number of compounding periods: "<<static_cast<int>(nCPer)<<endl
	<<"Interest rate per month: "<<intRate*CNVPERC<<"%"<<endl
	<<"Monthly payment: $"<<mPay<<endl
	<<"Total amount paid: $"<<totpaid<<endl
	<<"Interest paid: $"<<intpaid<<endl;  

   //Exit the program
    return 0;
}
