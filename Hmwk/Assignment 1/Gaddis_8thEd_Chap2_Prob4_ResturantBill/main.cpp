/* 
 * File:   main.cpp
 * Author: Joshua Ludwig
 * Created on September 16, 2017, 8:33 AM
 * Purpose: Write a program that computes the tax and tip on a restaurant
 *  bill for a patron with a $88.67 meal charge.
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

    float meal,//meal amount in dollars 
            tax,//tax calculation of meal multiplied by 0.0675%
            tip,//tip calculation of meal and tax together multiplied by 0.20%
            total;//Total collective amount of meal, tax, and tip.
    //Input or initialize values Here
    
    meal = 88.67;
    //Process/Calculations Here
    
    tax = meal * 0.0675;
    tip = (meal + tax) * 0.20;
    total = meal + tax + tip;
    //Output Located Here
    
    cout<<"$"<<meal<<endl;
    cout<<fixed<<setprecision(2)<<"$"<<tax<<endl;
    cout<<"$"<<tip<<endl;
    cout<<"$"<<total<<endl;


    //Exit
    return 0;
}

