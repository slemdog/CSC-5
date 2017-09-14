/* 
 * File:   main.cpp
 * Author: Selim Dogan
 * Created on September 14, 2017, 11:43 AM 
 * Purpose: to calculate future value given present value and interest rate
 */

//System Libraries
#include <iostream>       //Input/Output Stream Library
#include <cmath>	//c++ math library
using namespace std;    //Standard Name-Space under which System Libraries Reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants
const char PERCENT = 100;       //percentage conversion
//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float pVal;                 //Present value 
    unsigned char iRate,       //interest rate 
                    nComp;      //Number of compounding periods
    float fVal, fVal2;		//Future value calculated two ways

    //Initialize Variables
    pVal = 1e2f; //100.0f
    iRate = 6;  //6%/year
    
    //Process or map the inputs to the outputs
    nComp = 72/iRate;   //number of compounding periods 
    
    //intermediate variable
    float intr = 1+static_cast<float>(iRate)/PERCENT;
    
    //future value calculation using power function
    fVal = pVal * pow(intr,nComp);
    
    //future value calculation using log function
    fVal2 = pVal* exp(nComp*log(intr));

    //Display/Output all the pertinent variables
    cout<<"The present value is: $"<<pVal<<endl;
    cout<<"The interest rate is: "<<static_cast<short>(iRate)<<"%"<<endl<<endl;
    cout<<"There are "<<static_cast<short>(nComp)<<" compounding periods."<<endl;
    cout<<"The future value calculated using the exponent function is: $"<<fVal<<endl;
    cout<<"The future value calculated using natural logs is: $"<<fVal2<<endl;
            
    
    //Exit the program
    return 0;
}
