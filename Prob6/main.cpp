/* 
 * File:   main.cpp
 * Author: Selim Dogan
 * Created on Month X, 20XX, XX:XX XM
 * Purpose:
 */

//System Libraries
#include <iostream>       //Input/Output Stream Library
#include <cmath>
using namespace std;    //Standard Name-Space under which System Libraries Reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes
long fac(int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float sum(0);
    int x,n;
    
    //Input Data/Variables
    cout<<"Enter a value for x:"<<endl;
    cin>>x;
    cout<<"Enter number of terms"<<endl;
    cin>>n;
    
    //Process or map the inputs to the outputs
    for (int cnt(0);cnt<=n-1;cnt++){
        int intr=cnt*2+1;
        sum+=pow(-1,cnt)*powf(x,intr)/fac(intr);
    }
    
    //Display/Output all the pertinent variables
    cout<<"Sum"
    
    //Exit the program
    return 0;
}

long fac(int n){
    long a(1);
    for (int c=1;c<=n;c++){
        a*=c;
    }
    return a;
}