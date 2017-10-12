/* 
 * File:   main.cpp
 * Author: Joshua Ludwig
 * Created on September 16, 2016, 9:34 AM
 * Purpose: Write a program that will calculate the total sales tax of a $95
 * purchase.
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
    float prchse,     //The amount of dollars worth of said purchase
            total,
            tax1,
            tax2;  //The amount generated as the total sales tax
    float StTax,    //The state sales tax percentage
            StCtyTx;//The county sales tax percentage

    //Input or initialize values Here
    prchse  = 98;   //Purchase equivalent to 95 us dollars
    StTax = 0.04;   //StTax equivalent to 4%
    StCtyTx  = 0.02;//StCtyTx equivalent to 2%

    //Process/Calculations Here
    tax1 = prchse * StTax;
    tax2 = prchse * StCtyTx;
    total = tax1 + tax2;

    //Output Located Here
    cout<<"The total amount generated from both taxes is $ "<<total<<endl;


    //Exit
    return 0;
}

