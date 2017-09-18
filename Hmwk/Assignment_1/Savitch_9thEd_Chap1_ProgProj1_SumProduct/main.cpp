/* 
 * File:   main.cpp
 * Author: Selim Dogan
 * Created on September 17, 2017, 9:03 PM
 * Purpose: to calculate the sum and product of two numbers
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
    int num1, num2, sum, product;

    //Initialize Variables
    
    //Input Data/Variables
    cout<<"Enter two integers separated by a space: "<<endl;
    cin>>num1>>num2;

    //Process or map the inputs to the outputs
    sum=num1+num2;
    product=num1*num2;

    //Display/Output all the pertinent variables
    cout<<"\nYour two integers are "<<num1<<" and "<<num2<<endl;
    cout<<"The sum is "<<sum<<" and the product is "<<product<<endl;

    //Exit the program
    return 0;
}
