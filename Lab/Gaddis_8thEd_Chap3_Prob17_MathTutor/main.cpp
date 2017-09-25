/* 
 * File:   main.cpp
 * Author: Selim Dogan
 * Created on Month X, 20XX, XX:XX XM
 * Purpose:
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
#include <cstdlib>	//C standard library
#include <ctime>	//C time library
using namespace std;    //Standard Name-Space under which System Libraries Reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));

    //Declare Variables
    unsigned short num1,	//the first operator
		   num2,	//the second operator
		   cAns,	//the correct answer
		   sAns;	//the student's input
    
    //Initialize Variables
    num1=rand()%900+100;	//[100-999] 3 digit random number
    num2=rand()%900+100;	

    //Input Data/Variables
    cout<<"This program tests your addition capability"<<endl;
    cout<<"Type the answer: "<<endl;
    cout.width(6);
    cout<<num1<<endl;
    cout<<"+";
    cout.width(5);
    cout<<num2<<endl;
    cout<<"------"<<endl<<"  ";    
    cin>>sAns;

    //Calculate the result
    cAns=num1+num2;

    //Display/Output all the pertinent variables
    cout<<endl<<"The result = "<<cAns<<endl;
    cout<<((cAns==sAns)?"Correct":"Incorrect")<<endl;
   
    //Exit the program
    return 0;
}
