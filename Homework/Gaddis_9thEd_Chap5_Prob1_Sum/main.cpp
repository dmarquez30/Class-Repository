/* 
 * File:   main.cpp
 * Author: David marquez
 * Created on January 4, 2021, 10:50 AM
 * Purpose:   Gaddis_9thEd_Chap5_Prob1_Sum

 */

//System Libraries
#include <iostream>  //I/O Library
#include <string>
#include <iomanip>

using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    int sum,             // sum of the count 
         numbr;          //Number the user enters 
        
    //Initialize Variables
    cout<<"Enter a Positive Integer"<<endl;
    cin>>numbr;
    sum=0;
    //Map Inputs to Outputs -> Process
    for(int count=1;count <= numbr;count++){
        sum+= count;
        
    }
        cout<<"Sum = "<<sum<<endl;
    
    //Display Inputs/Outputs
    
    //Exit the Program - Cleanup
    return 0;
}
