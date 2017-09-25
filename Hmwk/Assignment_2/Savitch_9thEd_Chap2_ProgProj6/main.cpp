/* 
 * File:   main.cpp
 * Author: Selim Dogan
 * Created on September 24, 2017, 8:19 PM
 * Purpose: to calculate a worker's overtime pay with deductions
 */

//System Libraries
#include <iostream>       //Input/Output Stream Library
#include <iomanip>	//input output manipulation library
using namespace std;    //Standard Name-Space under which System Libraries Reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float basePay(16.78),	//base pay
	  ssPaid,		//social security tax paid
	  fiPaid,		//federal income tax paid
	  siPaid,		//state income tax paid
	  totPay,		//gross pay
	  thPay;		//take home pay
    unsigned short nDepend,	//number of dependents
		   hrsWrkd;	//hours worked
    unsigned char unFee(10),	//union fee
		  hiFee(35);	//health insurance fee for 3 or more dependents
    char loop;

    do {
    //Input Data/Variables
    cout<<"Enter the number of hours you worked this week:"<<endl;
    cin>>hrsWrkd;
    cout<<"Enter the amount of dependents you have:"<<endl;
    cin>>nDepend;
    
    //Process or map the inputs to the outputs
    totPay = (hrsWrkd<=40?(hrsWrkd*basePay):((basePay*40)+(hrsWrkd-40)*basePay*1.5f));
    ssPaid = 0.06*totPay;
    fiPaid = 0.14*totPay;
    siPaid = 0.05*totPay;
    thPay = totPay-ssPaid-fiPaid-siPaid-unFee;
    if (nDepend>=3){
	thPay-=hiFee;
    }
     
    //Display/Output all the pertinent variables
    cout<<endl<<"You worked "<<hrsWrkd<<" hours this week."<<endl;
    cout.precision(2);
    cout<<fixed<<"Your gross pay is:"<<setw(9)<<"$"<<totPay<<endl
	<<"Social Security tax paid:"<<setw(3)<<"$"<<ssPaid<<endl
	<<"Federal income tax paid:"<<setw(4)<<"$"<<fiPaid<<endl
	<<"State income tax paid:"<<setw(6)<<"$"<<siPaid<<endl
	<<"Union fees:"<<setw(17)<<"$"<<static_cast<float>(unFee)<<endl;
    if(nDepend>=3){
	cout<<"An additional $"<<static_cast<int>(hiFee)
	    <<" was taken out to cover the cost of health insurance for your dependents."<<endl;
    }
    cout<<endl<<"Your take-home pay is $"<<thPay<<"."<<endl;

    cout<<endl<<"Would you like to run the program again?"<<endl;
    cin>>loop;
    cout<<endl;
    }
   
    while (loop=='y');

   //Exit the program
    return 0;
}
