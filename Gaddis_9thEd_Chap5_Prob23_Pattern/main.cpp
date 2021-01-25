/* 
 * File:   main.cpp
 * Author: David marquez
 * Created on January 4, 2021, 10:50 AM
 * Purpose:  Chapter4 problem 8 sort names
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
    int  max,      //Maximum amount on a line
         min = 0;       //Minimum amount on a line 
    char
         varble = '+';   // character for the line structure
    
    
    //Initialize Variables
    cin>>max;
    
  
    for(int i= min ; i < max ; i++)                 // initialize "i". if i is less than the max. Increment i
    {   
        for( int j=min; j<= i; j++)                   // (nested loop) initialize "j". if j is less than i. Increment j
        {
        cout<<varble;                                 //add the character 
        }
        cout<<endl<<endl;                                  //skip the line and return to loop 
    }  
    for(int x=min; x< max-1; x++)
    {
       for(int y=max; y>x; --y)
       {
           cout<<varble;
       }
       cout<<endl<<endl;
    }
        cout<<varble;
    
    //Map Inputs to Outputs -> Process
  
   
  
    
    //Display Inputs/Outputs
    
   
    
    
    
    
    //Exit the Program - Cleanup
    return 0;
}
