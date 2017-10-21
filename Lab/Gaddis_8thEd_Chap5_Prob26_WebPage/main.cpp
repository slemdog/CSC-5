/* 
 * File:   main.cpp
 * Author: Selim Dogan
 * Created on Month X, 20XX, XX:XX XM
 * Purpose:
 */

//System Libraries
#include <iostream>       //Input/Output Stream Library
#include <cstring>	//c string library
#include <fstream>	//file stream library
using namespace std;    //Standard Name-Space under which System Libraries Reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    string fName,usrName,usrBio;
    ofstream out; 
    //Initialize Variables
    fName="webpage.html";
    out.open(fName.c_str());

    //Input Data/Variables
    cout<<"Generate a Code for a Bio Webpage"<<endl;    
    cout<<"Input Name"<<endl;
    getline(cin,usrName);
    cout<<"Input Bio"<<endl;
    getline(cin,usrBio);

    //Generate the web page
    cout<<"<html>"<<endl;
    cout<<"  <head>"<<endl;
    cout<<"    <title>Gaddis 9thEd Chap5 Prob26 Web Page Generator</title>"<<endl;
    cout<<"  </head>"<<endl;
    cout<<"  <body>"<<endl;
    cout<<"    <center>"<<endl;
    cout<<"        <h1>"<<usrName<<"</h1>"<<endl;
    cout<<"        <hr />"<<endl;
    cout<<"            "<<usrBio<<endl;
    cout<<"        <hr />"<<endl;
    cout<<"    </center>"<<endl;
    cout<<"  </body>"<<endl;
    cout<<"</html>"<<endl;
    
    //Generate the Web page
    out<<"<html>"<<endl;
    out<<"  <head>"<<endl;
    out<<"    <title>Gaddis 9thEd Chap5 Prob26 Web Page Generator</title>"<<endl;
    out<<"  </head>"<<endl;
    out<<"  <body>"<<endl;
    out<<"    <center>"<<endl;
    out<<"        <h1>"<<usrName<<"</h1>"<<endl;
    out<<"        <hr />"<<endl;
    out<<"            "<<usrBio<<endl;
    out<<"        <hr />"<<endl;
    out<<"    </center>"<<endl;
    out<<"  </body>"<<endl;
    out<<"</html>"<<endl;
 
    //close the file
    out.close();

    //Exit the program
    return 0;
}
