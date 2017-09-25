/* 
 * File:   main.cpp
 * Author: Selim Dogan
 * Created on September 24, 2017, 9:35 PM
 * Purpose: to calculate sine, cosine, and tangent given degrees
 */

//System Libraries
#include <iostream>       //Input/Output Stream Library
#include <cmath>	//C math library
using namespace std;    //Standard Name-Space under which System Libraries Reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants
const float PI(3.141592);
//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float degree,	//angle in degrees
	  radian,	//angle in radians
	  sine,		//sine of the angle
	  cosine,	//cosine of the angle
	  tangent;	//tangent of the angle
    
    //Input Data/Variables
    cout<<"Enter an angle in degrees: "<<endl;
    cin>>degree;
 
    //Process or map the inputs to the outputs
    radian=degree*PI/180;
    sine=sin(radian);
    cosine=cos(radian);
    tangent=tan(radian);

    //Display/Output all the pertinent variables
    cout<<endl<<"Input: "<<degree<<" degrees"<<endl;
    cout.setf(ios::fixed);
    cout.precision(4);
    cout<<"Angle: "<<radian<<" radians"<<endl
	<<"Sine: "<<sine<<endl
	<<"Cosine: "<<cosine<<endl
	<<"Tangent: "<<tangent<<endl;

    //Exit the program
    return 0;
}
