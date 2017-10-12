/* 
 * File:   main.cpp
 * Author: Joshua Ludwig
 * Created on September 22, 2017
 * Purpose: Write a program that converts Celsius to Fahrenheit
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float F,  //Variable for solved temperature Fahrenheit
            C;//Variable holding Celsius temperature 
    //Input or initialize values Here
    cout<<"Enter the temperature outside in Celsius"<<endl;
    cin>>C;
    //Process/Calculations Here
    F = (9 * C / 5) + 32;
    //Output Located Here
    cout<<"The temperature outside is "<<F<<" Fahrenheit"<<endl;
    //Exit
    return 0;
}

