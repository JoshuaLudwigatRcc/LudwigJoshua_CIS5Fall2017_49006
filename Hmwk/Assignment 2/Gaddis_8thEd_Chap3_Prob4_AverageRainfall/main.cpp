/* 
 * File:   main.cpp
 * Author: Joshua Ludwig
 * Created on September 23, 2017
 * Purpose: Write a program that calculates the avg rainfall for three months in
 *  inches
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
    string month1, month2, month3;
    float rain1, rain2, rain3, total;
    //Input or initialize values Here
    cout<<"Enter the first month of rainfall"<<endl;
    cin>>month1;
    cout<<"Enter the amount of rain"<<endl;
    cin>>rain1;
    cout<<"Enter the second month of rainfall"<<endl;
    cin>>month2;
    cout<<"Enter the amount of rain"<<endl;
    cin>>rain2;
    cout<<"Enter the third month of rainfall"<<endl;
    cin>>month3;
    cout<<"Enter the amount of rain"<<endl;
    cin>>rain3;
    //Process/Calculations Here
    total = (rain1 + rain2 + rain3) / 3; 
    //Output Located Here
    cout<<"--------------------------"<<endl;
    cout<<"--------------------------"<<endl;
    cout<<month1<<endl;
    cout<<rain1<<"in"<<endl;
    cout<<month2<<endl;
    cout<<rain2<<"in"<<endl;
    cout<<month3<<endl;
    cout<<rain3<<"in"<<endl;
    cout<<"The avg rainfall is "<<total<<"in"<<endl;
    //Exit
    return 0;
}

