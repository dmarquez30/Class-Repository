/* 
 * File:   main.cpp
 * Author: David marquez
 * Created on January 4, 2021, 10:50 AM
 * Purpose:  Gaddis_9thEd_Chap5_Prob13_MinMax
 */

//System Libraries
#include <iostream>  //I/O Library

using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays
const int SENTINEL= -99;
//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
     int       
            num,
            min,
            max;

    //Initialize Variables
     cin>>num;
     min = max = num;
     
     while( num != -99)
     {
         if (num < min)
         {
             min=num;
         } 
         if (num > max)
         {
             max=num;
         }
         cin>>num;
             
     }
   
    //Map Inputs to Outputs -> Process
     cout<<"Smallest number is: "<<min<<endl;
     cout<<"Largest number is: "<<max<<endl;
    
    //Exit the Program - Cleanup
    return 0;
}

