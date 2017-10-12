/* 
 * File:   main.cpp
 * Author: Joshua Ludwig
 * Created on September 22, 2017
 * Purpose: Write a program that asks for five test scores and calculates an
 *  avg. test score 
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
    float score1, score2, score3, score4, score5, total;
    //Input or initialize values Here
    cout<<"Enter test score 1"<<endl; 
    cin>>score1;
    cout<<"Enter test score 2"<<endl; 
    cin>>score2;
    cout<<"Enter test score 3"<<endl; 
    cin>>score3;
    cout<<"Enter test score 4"<<endl; 
    cin>>score4;
    cout<<"Enter test score 5"<<endl;
    cin>>score5;
    //Process/Calculations Here
    total = (score1 + score2 + score3 + score4 + score5) / 5;
    //Output Located Here
    cout<<"Your Avg test score is "<<total<<endl;
    //Exit
    return 0;
}

