/* 
 * File:   main.cpp
 * Author: Selim Dogan
 * Created on October 19, 2017, 11:40 AM
 * Purpose: display a pattern
 */

//System Libraries
#include <iostream>       //Input/Output Stream Library
using namespace std;    //Standard Name-Space under which System Libraries Reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Display/Output all the pertinent variables
    for(int cnt1=1,cnt2=19,cnt3=10;cnt1<=10;cnt1++,cnt2--,cnt3--){
	//Display the first triangle
	for(int t1=1;t1<=cnt1;t1++)cout<<"+"; 
	//Display Middle Spaces
	for(int t2=1;t2<=cnt2;t2++)cout<<" "; 
	//Display Second Triangle
	for(int t3=1;t3<=cnt3;t3++)cout<<"+"; 
	cout<<endl;
    }
    //Exit the program
    return 0;
}
