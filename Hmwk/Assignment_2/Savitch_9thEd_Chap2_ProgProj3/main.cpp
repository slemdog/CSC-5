/* 
 * File:   main.cpp
 * Author: Selim Dogan
 * Created on September 24, 2017, 4:05 PM
 * Purpose: to calculate the retroactive pay increase of a worker
 */

//System Libraries
#include <iostream>       //Input/Output Stream Library
using namespace std;    //Standard Name-Space under which System Libraries Reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants
const unsigned char PERCENT(100), CNVYTM(12);	//percentage conversion, years to months conversion

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    const float payInc(7.6f);	//pay increase percentage
    float oPay,			//old annual pay
	  nPay,			//new annual pay
	  rPay,			//retroactive pay
	  mPay;			//monthly pay
    unsigned short months;	//number of months pay increase retroactively applied to
    char again;			//value that triggers the repetition of the program

    //unvariable calculations
    float intr = payInc/PERCENT;	//intermediate conversion from percent to decimal 

    //do while loop
    do { 
 	   //Input Data/Variables
 	   cout<<"Enter in your old annual pay rate:"<<endl;
 	   cin>>oPay;
 	   cout<<"Enter the number of months pay increase retroactively applied to:"<<endl;
 	   cin>>months;   
 	
 	   //Process or map the inputs to the outputs
 	   rPay = oPay*months*intr/CNVYTM;	//retroactive pay calculation
 	   nPay = oPay*(1+intr);		//new annual pay calculation				
 	   mPay = nPay/CNVYTM;			//new monthly pay calculation
 	   
 	   //Display/Output all the pertinent variables
 	   cout.setf(ios::fixed);
 	   cout<<endl<<"Number of months the pay increase is retroactively applied to: "<<months<<endl;
 	   cout.precision(1);
 	   cout<<"Pay increase: "<<payInc<<"%"<<endl;
 	   cout.precision(2);
 	   cout<<"Old annual pay: $"<<oPay<<endl
 	       <<"New annual pay: $"<<nPay<<endl
 	       <<"Retroactive pay: $"<<rPay<<endl
 	       <<"New monthly pay: $"<<mPay<<endl;
 	   
 	   //Prompt the user to repeat the calculation
 	   cout<<endl<<"Would you like to run the program again? (y/n)"<<endl;
 	   cin>>again;
	   cout<<endl;
    }
    while (again=='y');
    
    //Exit the program
    return 0;
}
