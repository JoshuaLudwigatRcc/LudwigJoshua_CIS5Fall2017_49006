/* 
 * File:   main.cpp
 * Author: Joshua Ludwig
 * Created on September 21, 2017, 12:30 PM
 * Purpose: Write a program that asks how many tickets for each class of seats
 * were sold, then display results
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
    float clsA,
            clsB,
            clsC,
            total,
            A,
            B,
            C;
            
    //Input or initialize values Here
    cout<<"Input the number of sales of tickets of Class A section"<<endl;
    cin>>clsA;
    cout<<"Input the number of sales of tickets of Class B section"<<endl;
    cin>>clsB;
    cout<<"Input the number of sales of tickets of Class C section"<<endl;
    cin>>clsC;
    //Process/Calculations Here
    A = 15 * clsA;
    B = 12 * clsB;
    C = 9 * clsC;
    total = A + B + C;
    //Output Located Here
    cout<<"The number of tickets bought for Class A section were "<<clsA<<endl;
    cout<<"The number of tickets bought for Class B section were "<<clsB<<endl;
    cout<<"The number of tickets bought for Class C section were "<<clsC<<endl;
    cout<<"Your total collected revenue from the tickets is "<<total<<"$"<<endl;
    //Exit
    return 0;
}

