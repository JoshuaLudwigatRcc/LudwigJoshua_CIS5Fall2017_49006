/* 
 * File:   main.cpp
 * Author: Joshua Ludwig
 * Created on September 16, 2017, 11:50 AM
 * Purpose: Write a program that displays the current level of the ocean,the
 * elevation after a 5 year period, the elevation after a 7 year period, 
 * and after a 10 year period.
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
    float rise;    //Rate of rising sea level per year
    int year5,     //Variable for calculating 5 years of rising sea level
            year7, //Variable for calculating 7 years of rising sea level
            year10;//Variable for calculating 10 years of rising sea level
    //Input or initialize values Here
    rise = 1.5f;
    //Process/Calculations Here
    year5 = rise * 5;
    year7 = rise * 7;
    year10 = rise * 10;

    //Output Located Here
    cout<<"Current rate of rising sea level is "<<rise<<"mm/yr"<<endl;
    cout<<"The height of the sea after 5 years is "<<year5<<"mm"<<endl;
    cout<<"The height of the sea after 7 years is "<<year7<<"mm"<<endl;
    cout<<"The height of the sea after 10 years is "<<year10<<"mm"<<endl;



    //Exit
    return 0;
}

