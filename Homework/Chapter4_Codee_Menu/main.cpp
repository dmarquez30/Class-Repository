/* 
 * File:   main.cpp
 * Author: David marquez
 * Created on January 4, 2021, 10:50 AM
 * Purpose:  Chapter4 problem 8 sort names
 */

//System Level Libraries
#include <iostream>   //I/O Library
#include <iomanip>
#include <string>
using namespace std;  //Libraries compiled under std

//User Level Libraries

//Global Constants - Science/Math Related
//Conversions, Higher Dimensions

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Variable Declarations
    char choice;

    //Display Menu
    cout<<"Menu Example for Homework"<<endl;
    cout<<"Type 1 for Gaddis_9thEd_Chap5_Prob1_Sum "<<endl;
    cout<<"Type 2 for Gaddis_9thEd_Chap5_Prob7_PayInPennies"<<endl;
    cout<<"Type 3 for Gaddis_9thEd_Chap5_Prob13_MinMax"<<endl;
    cout<<"Type 4 for Gaddis_9thEd_Chap5_Prob22_Rectanglef"<<endl;
    cout<<"Type 5 for Gaddis_9thEd_Chap5_Prob23_Pattern"<<endl;
    cin>>choice;
    
    if(choice=='1'){
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

    }else if(choice=='2'){
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
    }else if(choice=='3'){
        



    //Declare Variables
     int       
            num,
            min,
            max;
const int SENTINEL= -99;
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
     cout<<"Smallest number in the series is "<<min<<endl;
     cout<<"Largest  number in the series is "<<max;
    
    //Exit the Program - Cleanup
    return 0;
    }else if(choice=='4'){
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
        
    }else if(choice=='5'){
            //Declare Variables   
    int  max,      //Maximum amount on a line
         min = 0;       //Minimum amount on a line 
    char
         varble ='+';   // character for the line structure
    
    
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
       for(int y=max; y>x; y--)
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
      
    }else{
        cout<<"Not an Option"<<endl;
    }

    //Clean Up
    
    //Exit stage right!
    return 0;
}
    
   