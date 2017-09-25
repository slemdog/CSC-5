/* 
 * File:   main.cpp
 * Author: Selim Dogan
 * Created on September 24, 2017, 11:07 PM
 * Purpose: to calculate the sum and average of 10 numbers
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
//    int num1, num2, num3, num4, num5,
//	num6, num7, num8, num9, num10;
    int num[10];
    int sumPos(0),	//sum of numbers greater than 0
 	sumNeg(0),	//sum of numbers <= 0
	sumAll(0);	//sum of all the numbers
    float avgPos,	//average of numbers >0
	  avgNeg,	//average of numbers <=0
	  avgAll;	//average of all the numbers
    unsigned char nPos(0),	//number of positive numbers
	  	  nNeg(0);	//number of negative numbers
  
//Input Data/Variables
//    cout<<"Enter 10 integers separated by a space:"<<endl;
//    cin>>num1>>num2>>num3>>num4>>num5>>num6>>num7>>num8>>num9>>num10;
//
//    //Process or map the inputs to the outputs
//    sumPos=(num1>0?num1:(nPos-=1)-nPos) + (num2>0?num2:(nPos-=1)-nPos) + (num3>0?num3:(nPos-=1)-nPos) + (num4>0?num4:(nPos-=1)-nPos) + (num5>0?num5:(nPos-=1)-nPos) + (num6>0?num6:(nPos-=1)-nPos) + (num7>0?num7:(nPos-=1)-nPos) + (num8>0?num8:(nPos-=1)-nPos) + (num9>0?num9:(nPos-=1)-nPos) + (num10>0?num10:(nPos-=1)-nPos);
    
    //For loop to process inputs 
    cout<<"Enter 10 integers in any order:"<<endl;
    for (int n=0; n<=9; n++){
	cin>>num[n];
        if (num[n] > 0){
	sumPos+=num[n];
	nPos+=1;
        }
	if (num[n] <=0){ 
	sumNeg+=num[n];
	nNeg+=1;
	}
	else
	sumAll+=num[n];
    }
    
    //Calculate averages
    avgPos = static_cast<float>(sumPos)/nPos;
    avgNeg = static_cast<float>(sumNeg)/nNeg;
    avgAll = sumAll/10.0f;
    
    //Display/Output all the pertinent variables
    cout<<endl<<"Your ten numbers are: "<<endl;
    for (int n=0;n<=9;n++){
	cout<<num[n]<<" ";
    }
    
    cout<<endl<<"Sum of positive numbers: "<<sumPos<<endl
	<<"Average of positive numbers: "<<avgPos<<endl
	<<"Sum of negative numbers: "<<sumNeg<<endl
	<<"Average of negative numbers: "<<avgNeg<<endl
	<<"Sum of all the numbers: "<<sumAll<<endl
	<<"Average of all the numbers: "<<avgAll<<endl;

    //Exit the program
    return 0;
}
