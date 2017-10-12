/* 
 * File:   main.cpp
 * Author: Joshua Ludwig
 * Created on September 16, 2017, 10:05 AM
 * Purpose: Write a program that computes the sum of five integers and find the 
 * average of the integers
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

    float Vrble1,//Variable 1
            Vrble2,//Variable 2
            Vrble3,//Variable 3
            Vrble4,//Variable 4
            Vrble5,//Variable 5
            sum,// The added amount of the five variables
            avg;// The divided average of the five variables
    //Input or initialize values Here
    Vrble1 = 28;
    Vrble2 = 32;
    Vrble3 = 37;
    Vrble4 = 24;
    Vrble5 = 33;
    //Process/Calculations Here
    sum = Vrble1 + Vrble2 + Vrble3 + Vrble4 + Vrble5;
    avg = sum / 5;
    //Output Located Here
    cout<<"The sum of the five variables is "<<sum<<endl;
    cout<<"The avg of the five variables is "<<avg<<endl;


    //Exit
    return 0;
}

