/* 
 * File:   main.cpp
 * Author: David marquez
 * Created on January 4, 2021, 10:50 AM
 * Purpose:  Chapter4 problem 8 sort names
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>   // Formating Library
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays
const int CNVPRCT=100;
//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float  pv=100.0f,              //present value in $
           fv,                 //future value
           intRate=0.06f;      //Interest rate in decimal 
    int    numCmpd;             //Number of compounding periods in years  
     
    //Initialize Variables
    numCmpd=72/(intRate*100);          //By the rule of 72
    fv=pv;                      //Initialize future savings
    //Map Inputs to Outputs -> Process
   cout<<fixed<<setprecision(2)<<showpoint;
   cout<<"Present Value = $"<<pv<<endl;
   cout<<"The Interest Rate =$"<<intRate*CNVPRCT<<endl;  
   cout<<"Number of years = "<<numCmpd<<endl; 
   cout<<"Count Year Savings Interest"<<endl;
    for(int count=0,years=2021;count<=numCmpd;count++,years++){
        float interest=(fv*intRate);      
        cout<<setw(3)<<count<<setw(8)<<years<<setw(9)<<fv<<setw(9)
                <<interest<<endl;       
        fv=fv*(1+intRate);
                
            }
 
            
            
            
    //Display Inputs/Outputs
    
    //Exit the Program - Cleanup
    return 0;
}
