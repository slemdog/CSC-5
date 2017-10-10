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
    short x(3),y(1),z(1); 
    //Initialize Variables
    if (x>y&&y>z) cout<<x<<y<<z;
    else if (x>y&&y<z&&x>z) cout<<x<<z<<y;
    else if (y>x&&x>z) cout<<y<<x<<z;
    else if (y>x&&x<z&&y>z) cout<<y<<z<<x;
    else if (z>x&&x>y) cout<<z<<x<<y;
    else cout<<z<<y<<x;
    //Input Data/Variables
    
    //Process or map the inputs to the outputs

    //Display/Output all the pertinent variables
    
    //Exit the program
    return 0;
}
