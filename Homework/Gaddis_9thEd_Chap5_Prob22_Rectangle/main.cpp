/* 
 * File:   main.cpp
 * Author: David marquez
 * Created on January 4, 2021, 10:50 AM
 * Purpose:  Gaddis_9thEd_Chap5_Prob22_Rectangle
 */

//System Libraries
#include <iostream>  //I/O Library

using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
     char  choice;                          //choice of character to create rectangle 
     int   numbr;                           //Number the user chooses
    //Initialize Variables
     
            cin>>numbr;                     
            cin>>choice;
            
   
    //Map Inputs to Outputs -> Process
  for(int i = 0; i < numbr-1; i++)              //initialize "i"=0 if i is less than number choice minus one raise it by one
  {
        for(int x =0 ; x <numbr -1; x++)         //initialize "x" if x is less than the number choice minus one raise it by one          
        {
              cout<<choice;                     //displays the height 
        }
          cout<<choice<<endl;                   //displays the width endl;
      
  }
            
           for (int w = 0; w < numbr; w++ )             //displays the last line without and endl;
            {
            
         cout<<choice;                  
    }
    //Display Inputs/Outputs
  
    //Exit the Program - Cleanup
    return 0;
}