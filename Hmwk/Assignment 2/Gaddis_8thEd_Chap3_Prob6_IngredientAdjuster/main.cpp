/* 
 * File:   main.cpp
 * Author: Joshua Ludwig
 * Created on September 23, 2017, 11:00 AM
 * Purpose: Write a program that calculates the amount of cups of sugar, butter,
 *  and flour to batch a said amount of cookies by the user
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
    float sug,    //Amount of sugar worth 40 cookies
            butr, //Amount of butter worth 40 cookies
            flour,//Amount of flour worth 40 cookies
            a,    //Calculated single amount of sugar per cookie
            b,    //Calculated single amount of butter per cookie
            c,    //Calculated single amount of flour per cookie
            amnt, //Set amount of cookies to make by the user
            d,    //Determined amount of sugar for users cookies
            e,    //Determined amount of butter for users cookies
            f;    //Determined amount of flour for users cookies
    //Input or initialize values Here
    cout<<"Enter the number of cookies you want to make"<<endl;
    cin>>amnt;
    sug = 1.5;
    butr = 1.0;
    flour = 2.75;  
    //Process/Calculations Here
    a = sug / 40;
    b = butr / 40;
    c = flour / 40;
    d = amnt * a;
    e = amnt * b;
    f = amnt * c;
    
    //Output Located Here
    cout<<"The ingredients needed to make your "<<amnt<<" cookies you'll need"<<endl;
    cout<<fixed<<setprecision(2)<<d<<" cups of sugar"<<endl;
    cout<<e<<" cups of butter"<<endl;
    cout<<f<<" cups of flour"<<endl;
    //Exit
    return 0;
}

