/* 
 * File:   main.cpp
 * Author: Joshua Ludwig
 * Created on September 23, 2017,3:00 PM
 * Purpose: Write a program that converts Celsius to Fahrenheit temperatures
 */
//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float F,
            C;
    //Input or initialize values Here
    cout<<"Enter the temperature outside in Celsius"<<endl;
    cin>>C;
    //Process/Calculations Here
    F = (9 * C / 5) + 32;
    //Output Located Here
    cout<<"You entered "<<C<<" Celsius"<<endl;
    cout<<"The Fahrenheit equals "<<fixed<<setprecision(1)<<F<<endl;
  
    //Exit
    return 0;
}

