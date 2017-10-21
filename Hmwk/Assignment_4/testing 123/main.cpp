/* 
 * File:   main.cpp
 * Author: Selim Dogan
 * Created on Month X, 20XX, XX:XX XM
 * Purpose:
 */

//System Libraries
#include <iostream>       //Input/Output Stream Library
#include <iomanip>
using namespace std;    //Standard Name-Space under which System Libraries Reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int speed,dist,time; 
    //Initialize Variables
    
    //Input Data/Variables
    do {
	cout<<"Enter the speed of the vehicles in miles per hour:"<<endl;
	cin>>speed;
    }
    while (speed<0);
    do{
	cout<<"Enter the time traveled in hours(cannot be less than one):"<<endl;
	cin>>time;
    }
    while(time<=1);
    
    //Process or map the inputs to the outputs
    cout<<"Hour		Distance traveled"<<endl;
    cout<<"---------------------------------"<<endl;
    for (int i=1; i<=time; i++){
	dist=i*speed;
	cout<<setw(4)<<i<<setw(29)<<dist<<endl;
    }
    //Display/Output all the pertinent variables
    
    //Exit the program
    return 0;
}
