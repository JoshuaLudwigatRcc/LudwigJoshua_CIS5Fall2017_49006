/* 
 * File:   main.cpp
 * Author: Joshua Ludwig
 * Created on September 16, 2017, 11:30 AM
 * Purpose: Write a program that calculates an employees annual pay
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
    int payAmnt,
            payPrds,
            yearPay;
    //Input or initialize values Here
    payAmnt = 2200.0;
    payPrds = 26;
    //Process/Calculations Here
    yearPay = payAmnt * payPrds;

    //Output Located Here
    cout<<"The pay amount of an employee is $"<<payAmnt<<endl;
    cout<<"The pay periods per year is "<<payPrds<<endl;
    cout<<"The annual income of an employee is "<<yearPay<<endl;




    //Exit
    return 0;
}

