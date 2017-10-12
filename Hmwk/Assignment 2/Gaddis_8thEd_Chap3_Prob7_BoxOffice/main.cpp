/* 
 * File:   main.cpp
 * Author: Joshua Ludwig
 * Created on September 25, 2017, 1:01 PM
 * Purpose:  Write a program that calculates a theater's gross and net box
 * office profit for one night 
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
    string Title;
    float adult = 10.00, child = 6.00, Gross, NetBox, Dist, ticket1, ticket2, 
    percent =0.20;
    
    //Input or initialize values Here
    cout<<"Enter the name of the movie"<<endl;
    getline(cin, Title);
    cout<<"Enter the number of adult tickets sold"<<endl;
    cin>>ticket1;
    cout<<"Enter the number of child tickets sold"<<endl;
    cin>>ticket2;
    
    NetBox = (ticket1 * adult) + (ticket2 * child);
    Gross  = (ticket1 * adult) + (ticket2 * child);
    Dist   = (ticket1 * adult) + (ticket2 * child);
            
    //Output Located Here
    cout<<"Movie name is                 "<<Title<<endl;
    cout<<"Adult tickets sold            "<<ticket1<<endl;
    cout<<"Child tickets sold            "<<ticket2<<endl;
    cout<<"Gross Box office profit is    "<<fixed<<setprecision(2)<<Gross<<"$"<<endl; 
    cout<<"Net Box office profit is      "<<fixed<<setprecision(2)<<
            NetBox*.20<<"$"<<endl;
    cout<<"Amount paid to Distributor is "<<fixed<<setprecision(2)<<
            Dist*.80<<"$"<<endl;

    //Exit
    return 0;
}

