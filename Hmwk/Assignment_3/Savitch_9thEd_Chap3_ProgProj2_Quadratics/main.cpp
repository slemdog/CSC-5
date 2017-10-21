/* 
 * File:   main.cpp
 * Author: Selim Dogan
 * Created on October 11, 2017, 5:51 PM
 * Purpose: to calculate the roots of a quadratic equation
 */

//System Libraries
#include <iostream>       //Input/Output Stream Library
#include <cmath>	//c math library 
using namespace std;    //Standard Name-Space under which System Libraries Reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float a,b,c;	//ax^2+bx+c
    float disc,		//the discriminant
	  root1,root2;	//up to 2 roots
    char nroots;

    //Input Data/Variables
    cout<<"This program calculates the roots of a quadratic equation. (ax^2+bx+c=0)"<<endl;
    cout<<"Please enter the values for a, b, and c:"<<endl;
    cin>>a>>b>>c;
//    cout<<a<<b<<c;

    //Process or map the inputs to the outputs
    disc=b*b-4*a*c;
//    cout<<disc;
    nroots=disc<0?0:
	   disc>0?2:1;
    float intr = sqrt(disc);
    switch (nroots){
	case 0: {root1
		cout<<"The roots are complex."<<endl;
    //Display/Output all the pertinent variables
    
    //Exit the program
    return 0;
}
