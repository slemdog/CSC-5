/* 
 * File:   main.cpp
 * Author: Selim Dogan
 * Created on Oct 4th, 2017, 9:35 AM
 * Purpose:  Menu withLoops
 */

//System Libraries
 #include <iostream>        //Input/Output Stream Library
 #include <cstring>         //c string library
 #include <fstream>         //file stream library
 #include <cmath>           //Absolute value function
 #include <iomanip>         //Formatting Library

using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants
const float GRAVITY=6.673e-8f;//Universal Gravitational Constant cm^3/gram/sec^2
const float CNVCMFT=1/30.48f; //30.48cm/ft
const float CNVMFT =5280.0f;  //5280 ft/mile
const float CNVGKG =1000.0f;  //1000 grams to 1 kilogram
const float REARTH =3959.0f;  //Radius of the earth miles
const float MEARTH =5.972e24f;//Mass of the earth kilograms

const char  DOLLAR =100;      //Dollar contains 100 pennies
const char  QUARTER= 25;      //Quarter contains 25 pennies
const char  DIME   = 10;      //Dime contains 10 pennies
const char  NICKEL =  5;      //Nickel contains 5 pennies
const float HLFPNY =0.005f;   //Half penny round up
const char  CNVPNY =100;      //Conversion to a penny

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int choice;
    
    //Loop the Menu and Problems
    do{
        //Input Data/Variables
        cout<<"Choose from the Menu"<<endl;
        cout<<"1. Gaddis_8thEd_Chap5_Prob11_PopulationGrowth"<<endl;
        cout<<"2. Gaddis_8thEd_Chap5_Prob23_PatternDisplay"<<endl;
        cout<<"3. Gaddis_8thEd_Chap5_Prob26_WebPage"<<endl;
        cout<<"4. Savitch_8thEd_Chap4_Prob4_Inflation"<<endl;
        cout<<"5. Savitch_8thEd_Chap4_Prob7_Weight"<<endl;
        cout<<"6. Savitch_9thEd_Chap4_Prob6_VendingMachine"<<endl;
        cout<<"7. Gaddis_8thEd_Chap5_Prob1_SumofNumbers"<<endl;
        cout<<"8. Gaddis_8thEd_Chap5_Prob2_CharactersforASCIICodes"<<endl;
        cout<<"9. "<<endl;
        cin>>choice;
        cout<<endl;

        //Process or map the inputs to the outputs
        switch(choice){
            case 1:{
                cout<<"You are in Gaddis_8thEd_Chap5_Prob11_PopulationGrowth"<<endl;
   
                    //Declare Variables
                    float pop,incPop,popPow;
                    int nYears;

                    //Input Data/Variables
                    cout<<"Calculate the increase in population over time"<<endl;
                    cout<<"Input the population, percentage yearly increase and "<<endl;
                    cout<<"The number of years"<<endl;
                    cin>>pop>>incPop>>nYears;

                    //Process or map the inputs to the outputs
                    float temp=(1+incPop/100.0f);
                    popPow=pop*pow(temp,nYears);
                    for(int year=1;year<=nYears;year++){
                        pop*=temp;
                    }

                    //Display/Output all pertinent variables
                    cout<<"The resulting population in "<<nYears<<" years = "
                            <<pop<<" people using a loop"<<endl;
                    cout<<"  Same result population in "<<nYears<<" years = "
                            <<popPow<<" people using the pow()"<<endl;         
                break;
            }
            
            case 2:{
                cout<<"You are in Gaddis_8thEd_Chap5_Prob23_PatternDisplay"<<endl;
                
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
                break;
            }
            
            case 3:{
                cout<<"You are in Gaddis_8thEd_Chap5_Prob26_WebPage"<<endl;
                
                    //Declare Variables
                    string fName,usrName,usrBio;
                    ofstream out; 
                    //Initialize Variables
                    fName="webpage.html";
                    out.open(fName.c_str());

                    //Input Data/Variables
                    cout<<"Generate a Code for a Bio Webpage"<<endl;    
                    cout<<"Input Name"<<endl;
                    cin.ignore();
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
                break;
            }
            
            case 4:{
                cout<<"You are in Savitch_8thEd_Chap4_Prob4_Inflation"<<endl;
                
                    //Declare Variables
                    int yrNow=2017,yrThen;
                    double infRate,prNow,prThen;

                    //Initialize Variables

                    //Input Data/Variables
                    cout<<"This program calculates inflation rate"<<endl;
                    cout<<"Year and Price of Original Item"<<endl;
                    cout<<"as well as price today"<<endl;
                    cin>>yrThen>>prThen>>prNow;

                    //Process or map the inputs to the outputs
                    infRate=.01;
                    double delta,prCalc;
                    double kGain=.00001,tol=.00000001;
                    do{
                        prCalc=prThen;
                        for(int year=yrThen+1;year<=yrNow;year++){
                            prCalc*=(1+infRate);
                        }
                        delta=(prNow-prCalc)/prNow;
                        infRate+=kGain*delta;
                    }while(abs(delta)>=tol);

                    //Display/Output all pertinent variables
                    cout<<fixed<<setprecision(2)<<showpoint;
                    cout<<"In "<<yrThen<<"    the price = $"<<setw(11)<<prThen<<endl;
                    cout<<"In "<<yrNow<<"    the price = $"<<setw(11)<<prNow<<endl;
                    cout<<"The Price calculated = $"<<setw(11)<<prCalc<<endl;
                    cout<<"The inflation rate   =  "<<setw(11)<<infRate*100.0f<<"%"<<endl;
                break;
            }
            
            case 5:{
                cout<<"You are in Savitch_8thEd_Chap4_Prob7_Weight"<<endl;
                
                    //Declare Variables
                    float myMass, myWgt, actWgt;

                    //Initialize Variables
                    myMass=6.0f;//6 slugs

                    //Input Data/Variables
                    cout<<"This program converts your weight in lbs to"<<endl;
                    cout<<"Your mass in slugs"<<endl;
                    cout<<"Input your actual weight in lbs"<<endl;
                    cin>>actWgt;

                    //Process or map the inputs to the outputs
                    float delta,tol=.001f;
                    float kGain=tol;
                    do{
                        myWgt=GRAVITY*CNVCMFT*CNVCMFT*CNVCMFT*MEARTH*CNVGKG*myMass/
                            (REARTH*REARTH*CNVMFT*CNVMFT);
                        delta=actWgt-myWgt;
                        myMass+=kGain*delta;
                    }while(abs(delta)>=tol);

                    //Display/Output all pertinent variables
                    cout<<"Your weight = "<<myWgt<<" lbs"<<endl;
                    cout<<"Your mass   = "<<myMass<<" slugs"<<endl;
                break;
            }
            
            case 6:{
                cout<<"You are in Savitch_9thEd_Chap4_Prob6_VendingMachine"<<endl;
                
                //Declare Variables
                    float price,tndrd;
                    unsigned short change;
                    unsigned char nDlrs,nQtrs,nDimes,nNckls;

                    //Initialize Variables

                    //Input Data/Variables
                    do{
                        cout<<"The Vending Machine Problem calculates the change"<<endl;
                        cout<<"Input the Price of the Product and the Amount Tendered"<<endl;
                        cin>>price>>tndrd;
                    }while(price>tndrd);

                    //Calculate the change
                    change=(tndrd-price+HLFPNY)*CNVPNY;//Accounts for float inaccuracy
                    nDlrs=(change-change%DOLLAR)/DOLLAR;
                    change-=(nDlrs*DOLLAR);
                    nQtrs=(change-change%QUARTER)/QUARTER;
                    change-=(nQtrs*QUARTER);
                    nDimes=(change-change%DIME)/DIME;
                    change-=(nDimes*DIME);
                    nNckls=(change-change%NICKEL)/NICKEL;
                    change-=(nNckls*NICKEL);
                    change=nDlrs*DOLLAR+nQtrs*QUARTER+nDimes*DIME+nNckls*NICKEL;


                    //Display/Output all pertinent variables
                    cout<<"The change in Pennies  = "<<change<<endl;
                    cout<<"The number of Dollars  = "<<static_cast<int>(nDlrs)<<endl;
                    cout<<"The number of Quarters = "<<static_cast<int>(nQtrs)<<endl;
                    cout<<"The number of Dimes    = "<<static_cast<int>(nDimes)<<endl;
                    cout<<"The number of Nickels  = "<<static_cast<int>(nNckls)<<endl;
                break;
            }
            
            case 7:{
                cout<<"You are in Gaddis_8thEd_Chap5_Prob1_SumofNumbers"<<endl;
                    //Declare Variables
                    int num, sum(0),sum2;

                    //Input Data/Variables
                    do {
                        cout<<"Enter a positive integer:"<<endl;
                        cin>>num;
                    } while (num<0);

                    //Calculations
                    for (int i=0;i<=num;i++) sum+=i;
                    sum2=num*(num+1)/2;

                    //Display outputs
                    cout<<"The sum of all the integers from 1 to "<<num<<" found using a for loop is "<<sum<<endl;
                    cout<<"The sum of all the integers from 1 to "<<num<<" found using the sum formula is "<<sum2<<endl;
                break;
            }
            case 8:{
                cout<<"You are in Gaddis_8thEd_Chap5_Prob2_CharactersforASCIICodes"<<endl;
                    //Display/Output all the pertinent variables
                    for (unsigned char a=0; a<=127; a++){
                        cout<<a;
                        if (a>=16&&a%16==0) cout<<endl;
                    } cout<<endl;
                break;
            }
            case 9:{
                cout<<"You are in Problem 9"<<endl;
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
                    cout<<endl<<"Hour		Distance traveled"<<endl;
                    cout<<"---------------------------------"<<endl;
                    for (int i=1; i<=time; i++){
                        dist=i*speed;
                        cout<<setw(4)<<i<<setw(29)<<dist<<endl;
                    }
                break;
            }
            default:{
                cout<<"Exiting, have a great day!"<<endl;
            }
        } cout<<endl;
    }while(choice>0&&choice<10);
    
    //Exit the program
    return 0;
}
