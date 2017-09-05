/* 
 * File:   main.cpp
 * Author: Selim Dogan
 * Created on September 5, 2017, 11:47 AM
 * Purpose: calculate DoD and NASA budget percentages
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
    float fedBud = 3.8e12f;     //total U.S. federal budget
    float dodBud = 609e9f;      //Department of defense budget
    float nasaBud = 18.4e9f;    //NASA budget
    float pctNASA;              //percentage of federal budget for NASA
    float pctDoD;               //percentage of federal budget for defense 
    
    //Process or map the inputs to the outputs
    pctDoD = dodBud/fedBud*100;     //DoD budget percentage calculation
    pctNASA = nasaBud/fedBud*100;   //NASA budget percentage calculation
    
    //Display/Output all the pertinent variables
    cout<<"The total federal budget is:                 $"<<fedBud<<endl;
    cout<<"The total Department of Defense budget is:   $"<<dodBud<<endl;
    cout<<"The total NASA budget is:                    $"<<nasaBud<<endl<<endl;
    cout<<"DoD budget is "<<pctDoD<<"% of federal spending."<<endl;
    cout<<"NASA budget is "<<pctNASA<<"% of federal spending."<<endl;
    
    //Exit the program
    return 0;
}