/* 
 * File:   main.cpp
 * Author: Joshua Ludwig
 * Created on July 19, 2016, 8:00 AM
 * Purpose:Write a program that stores the integers 50 and 100 in variables, and
 *  stores the sum of these two in a variable named total.
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
    int integer1,//Value of 50
        integer2,//Value of 100
        total;   //Sum value of integer 1 and 2 
    //Input or initialize values Here
    integer1 = 50;
    integer2 = 100;
    //Process/Calculations Here
    total = integer1 + integer2;
    //Output Located Here
    cout<<"The sum of integer1 and integer2 is "<<total<<endl;

    //Exit
    return 0;
}

