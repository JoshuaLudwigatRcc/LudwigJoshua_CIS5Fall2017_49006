/* 
 * File:   main.cpp
 * Author: Joshua Ludwig
 * Created on September 16, 2017, 12:45 AM
 * Purpose: write a program that holds the prices of the five items in five
 * variables, each items price, subtotal, sales tax, and total.
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
    float price1,
            price2,
            price3,
            price4,
            price5,
            subttl,
            slstx,
            slstxtl,
            total;

    //Input or initialize values Here
    price1 = 15.95;
    price2 = 24.95;
    price3 = 6.95;
    price4 = 12.95;
    price5 = 3.95;
    slstx = 0.07;

    //Process/Calculations Here
    subttl = price1 + price2 + price3 + price4 + price5;
    slstxtl = subttl * slstx;
    total = subttl + slstxtl;
    

    //Output Located Here
    cout<<" Price1 is $"<<price1<<endl;
    cout<<" Price2 is $"<<price2<<endl;
    cout<<" Price3 is $"<<price3<<endl;
    cout<<" Price4 is $"<<price4<<endl;
    cout<<" Price5 is $"<<price5<<endl;
    cout<<" Your subtotal is $"<<subttl<<endl;
    cout<<" Your sales tax is $"<<fixed<<setprecision(2)<<slstxtl<<endl;
    cout<<" Your total is $"<<total<<endl;



    //Exit
    return 0;
}

