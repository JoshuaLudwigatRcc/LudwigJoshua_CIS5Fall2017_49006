/* 
 * File:   main.cpp
 * Author: Joshua Ludwig
 * Created on September 21, 2017, 12:15 PM
 * Purpose: Write a program that calculates a car's gas mileage
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
    float gl,//Amount of a full tank of gasoline
            mls,//Total amount of miles achieve on a full tank
            mlsprgl;//Calculated mls/gl 
    //Input or initialize values Here
    cout<<"Enter the number of gallons your car tank capacity can hold"<<endl;
    cin>>gl;
    cout<<"Enter the total number of miles your car can drive on a full tank of gas"<<endl;
    cin>>mls;
    //Process/Calculations Here
    mlsprgl = mls / gl;
    //Output Located Here
    cout<<"You get "<<fixed<<setprecision(1)<<mlsprgl<<" miles per gallon"<<endl;
    

    //Exit
    return 0;
}

