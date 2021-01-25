/* 
 * File:   main.cpp
 * Author: David marquez
 * Created on January 23, 2021, 3:08 AM
 * Purpose:  Chapter4 problem 8 sort names
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays
const int MULT=2;
//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
     
             
             
     unsigned int   payMult=2,
             payDay=1,
             total,
             numDays;
     
    //Initialize Variables
   
     cin>>numDays;
    //Map Inputs to Outputs -> Process
    while(numDays<1)
     {
         cout<<"Number of days must be greater than zero.\n"
            <<"ERROR: Input a number greater than zero.\n";
                 cin>>numDays;
                 
     }
     
     for( int i=0; i < numDays; i++)
     {
          total+=payDay;
         payDay=payDay*payMult;
          
     }  cout<<"Pay = $"<<total/100<<".";
     if((total%100)<10)      
     {
        cout<<"0"<<total%100;   
     }else if ((total%100)>=10);{
         cout<<total%100;
         
         //Display Inputs/Outputs
}
    //Exit the Program - Cleanup
    return 0;
}
