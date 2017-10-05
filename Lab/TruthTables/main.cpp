/* 
 * File:   main.cpp
 * Author: Selim Dogan
 * Created on Month X, 20XX, XX:XX XM
 * Purpose:
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
    int x[4] = {1,1,0,0};		//boolean array 
    int y[4] = {1,0,1,0};		//boolean array
    
    //Process or map the inputs to the outputs
    cout<<"x y !x !y x||y x&&y x^y (x^y)^y (x^y)^x !(x||y) !x&&!y !(x&&y) !x||!y"<<endl;
    for (int n=0;n<4;n++) {
	cout<<(x[n]?"T":"F");
	cout.width(2);
	cout<<(y[n]?"T":"F");
	cout.width(3);
	cout<<(!x[n]?"T":"F");
	cout.width(3);
	cout<<(!y[n]?"T":"F");
	cout.width(3);
	cout<<(x[n]||y[n]?"T":"F");
	cout.width(5);
	cout<<(x[n]&&y[n]?"T":"F");
	cout.width(5);
	cout<<(x[n]^y[n]?"T":"F");
	cout.width(6);
	cout<<((x[n]^y[n])^y[n]?"T":"F");
	cout.width(8);
	cout<<((x[n]^y[n])^x[n]?"T":"F");
	cout.width(8);
	cout<<(!(x[n]||y[n])?"T":"F");
	cout.width(7);
	cout<<(!x[n]&&!y[n]?"T":"F");
	cout.width(8);
	cout<<(!(x[n]&&y[n])?"T":"F");
	cout.width(7);
	cout<<(!x[n]||!y[n]?"T":"F");
	cout<<endl;
    }
    //Display/Output all the pertinent variables
    
    //Exit the program
    return 0;
}
