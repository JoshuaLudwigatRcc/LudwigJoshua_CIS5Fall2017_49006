/* 
 * File:   main.cpp
 * Author: Joshua Ludwig
 * Created on October 8, 2017, 10:36 AM
 * Purpose:  Menu without Loops
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
#include <cmath>        //Mathmatic operator
#include <iomanip>      //Required for setw
#include <string>       //String variable operator
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants
//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int choice;
    
    //Input Data/Variables
    cout<<"Choose from the Menu"<<endl;
    cout<<"1. Problem 1"<<endl;
    cout<<"2. Problem 2"<<endl;
    cout<<"3. Problem 3"<<endl;
    cout<<"4. Problem 4"<<endl;
    cout<<"5. Problem 5"<<endl;
    cout<<"6. Problem 6"<<endl;
    cout<<"7. Problem 7"<<endl;
    cout<<"8. Problem 8"<<endl;
    cout<<"9. Problem 9"<<endl;
    cout<<"10.Problem 10"<<endl;
    cin>>choice;
    
    //Process or map the inputs to the outputs
    switch(choice){
        case 1:{
            cout<<"You are in Problem 1 of Gaddis 8thEd Chap 4 problem 1"
                  " Minimum & Maximum"<<endl;
                //Declare all Variables Here
            int num1,num2;

            //Input or initialize values Here
            cout<<"Enter your first number within 1-10"<<endl;
            cin>>num1;
            while (num1 < 1 || num1 > 10){
                cout<<"Error try again enter a number between 1-10"<<endl;
                cin>>num1;
            }
            cout<<"Enter your second number within 1-10"<<endl;
            cin>>num2;
            while (num2 < 1 || num2 > 10){
                cout<<"Error try again enter a number between 1-10"<<endl;
                cin>>num2;
            }
            //Process/Calculations Here
            cout<<endl;
            if (num1 > num2){
                cout<<"Number "<<num1<<" is greater than number "<<num2<<endl;
            }else{
                cout<<"Number "<<num2<<" is greater than number "<<num1<<endl;
            }
            break;
        }
        case 2:{
            cout<<"You are in Problem 2 of Gaddis 8thEd Chap4 Problem 2"
                  " RomanNumeralConverter"<<endl;
            //Declare all Variables Here
            int num,nOnes;    
            //Input or initialize values Here
            cout<<"Enter a number between 1-10"<<endl;
            cin>>num;
            //Process/Calculations Here
            nOnes = num;
            //Output Located Here
             switch(nOnes){
                case 10: cout<<"X";break; 
                case 9: cout<<"VIIII";break;
                case 8: cout<<"VIII";break;
                case 7: cout<<"VII";break;
                case 6: cout<<"VI";break;
                case 5: cout<<"V";break;
                case 4: cout<<"IV";break;
                case 3: cout<<"I";
                case 2: cout<<"I";
                case 1: cout<<"I";
            }
            break;
        }
        case 3:{
            cout<<"You are in Problem 3 of Gaddis 8thEd Chap4 Prob 3"
                  " MagicDates"<<endl;
            //Declare all Variables Here
            int mnth,day,yr,mgc;
            cout<<"Enter a month in numeric form"<<endl;
            //Input or initialize values Here
            cin>>mnth;
            while (mnth < 0 || mnth > 12){
                cout<<"Error invalid month, enter a month in numeric form"<<endl;
                cin>>mnth;
            }
            cout<<"Enter a day in numeric form"<<endl;
            cin>>day;
            while (day < 0 || day > 31){
                cout<<"Error invalid day, enter a day in numeric form"<<endl;
                cin>>day;
            }
            cout<<"Enter a two digit year"<<endl;
            cin>>yr;
            while (yr < 0 || yr > 99){
                cout<<"Error invalid year, enter a two digit year"<<endl;
                cin>>yr;
            }
            //Process/Calculations Here
            mgc = mnth * day;
            cout<<"You typed "<<mnth<<"/"<<day<<"/"<<yr<<endl;
            if (mgc = yr){
                cout<<"Your date is magic"<<endl;
            }
            else{
                cout<<"Your date is not magic"<<endl;
            }
            break;
        }
        case 4:{
            cout<<"You are in Problem 4 of Gaddis 8thEd Chap 4 Prob 4 Areas"
                  " of Rectangles"<<endl;
            //Declare variables here
            int lngth1,lngth2,area1,area2,wdth1,wdth2;
            //Input or initialize here
            cout<<"Enter the length of rectangle 1"<<endl;
            cin>>lngth1;
            cout<<"Enter the width of rectangle 2"<<endl;
            cin>>wdth1;
            cout<<"Enter the length of rectangle 1"<<endl;
            cin>>lngth2;
            cout<<"Enter the width of rectangle 2"<<endl;
            cin>>wdth2;
            //Process calculations here
            area1 = lngth1 * wdth1;
            area2 = lngth2 * wdth2;
            if (area1 > area2){
                cout<<"Rectangle 1's area is greater than rectangle 2"<<endl;
            }
            else if (area2 < area1){
                cout<<"Rectangle 2's area is greater than rectangle 1"<<endl;
            }
            else if (area1 = area2){
                cout<<"Rectangle 1's area is equivalent to rectangle 2"<<endl;
            }
            break;
        }
        case 5:{
            cout<<"You are in Problem 5 of Gaddis 8thEd Chap 4 Prob 5"
                  " Body Mass Index"<<endl;
            //Declare variables here
            float BMI,
                    wgt,
                    hgt,
                    exp;
            //Input or initialize variables here
            cout<<"Enter your weight in lbs"<<endl;
            cin>>wgt;
            cout<<"Enter your height in inches"<<endl;
            cin>>hgt;
            exp = 2;
            //Process calculations here
            BMI = (wgt/pow(hgt,exp)) * 703;
            cout<<"your BMI is "<<BMI<<endl;
            if(BMI > 18.5 && BMI <25){
                cout<<"Your weight is optimal"<<endl;
            }
            else if(BMI < 18.5){
                cout<<"Your are underweight"<<endl;
            }
            else if(BMI > 25){
                cout<<"Your are overweight"<<endl;
            }
            break;
        }
        case 6:{
            cout<<"You are in Problem 6 of Gaddis 8thEd Chap 4 Prob 6"
                  " Mass and Weight"<<endl;
            //Declare variables here
            float mass,wgt,vol,dsty;
            //Input or initialize variables here 
            cout<<"To calculate the weight of your object in newtons we'll calculate the mass of your object"<<endl;
            cout<<endl;
            cout<<"Enter the volume of your object"<<endl;
            cin>>vol;
            cout<<"Enter the density of your object"<<endl;
            cin>>dsty;
            //Process calculations here
            mass = vol * dsty;
            wgt = mass * 9.8;
            cout<<"Now using your calaculated mass into the equation Your weight is "<<wgt<<" newtons"<<endl;
            if (wgt > 1000){
                cout<<"Your object is too heavy"<<endl;
            }
            else if(wgt < 10){
                cout<<"Your object is too light"<<endl;
            }
            break;
        }
        case 7:{
            cout<<"You are in Problem 7 of Gaddis 8thEd Chap 4 Prob7 TimeCalculator"<<endl;
            float a,b,c,sec,min,hr,day,total;
            min = 60;
            hr = 3600;
            day = 86400;
            
            cin>>sec;
            a = sec / min;
            b = sec / hr;
            c = sec / day;
            cout<<"In "<<sec<<" seconds there's"<<fixed<<setprecision(2)<<endl;
            if (sec > min){
                cout<<a<<" mins"<<endl;
            }
            if (sec > hr){
                cout<<b<<" hrs"<<endl;
            }
            if (sec > day){
                cout<<c<<" days"<<endl;
            }
            break;
        }
        case 8:{
            cout<<"You are in Problem 8 of Gaddis 8thEd Chap4 Prob8 Color Mixer"<<endl;
            string a,b;
            cin>>a;
            while (!( a == "red" || a == "yellow" || a == "blue")){
                cout<<"Error"<<endl;
                cin>>a;
            }
            cin>>b;
            while (!( b == "red" || b == "yellow" || b == "blue")){
                cout<<"Error"<<endl;
                cin>>b;
            }
            cout<<endl;
            if(a == "red" && b == "blue"){
                cout<<"When you mix red and blue, you get purple"<<endl;
            }
            else if(a == "blue" && b == "red"){
                cout<<"When you mix red and blue, you get purple"<<endl;
            }
            else if(a == "red" && b == "yellow"){
                cout<<"When you mix red and yellow, you get orange"<<endl;
            }
            else if(a == "yellow" && b == "red"){
                cout<<"When you mix red and yellow, you get orange"<<endl;
            }
            else if(a == "blue" && b == "yellow"){
                cout<<"When you mix blue and yellow, you get green"<<endl;
            }
            else if(a == "yellow" && b == "blue"){
                cout<<"When you mix blue and yellow, you get green"<<endl;
            }
            break;
        }
        case 9:{
            cout<<"You are in Problem 9 from Gaddis 8thEd Chap4 Prob9 Change for a Dollar game"<<endl;
            float pny,dim,nikl,qrtr,pnytl,dimtl,nikltl,qrtrtl,total;
            cout<<"Enter the number of pennys you have"<<endl;
            cin>>pny;
            cout<<"Enter the number of nickels you have"<<endl;
            cin>>nikl;
            cout<<"Enter the number of dimes you have"<<endl;
            cin>>dim;
            cout<<"Enter the number of quarters you have"<<endl;
            cin>>qrtr;
            pnytl = pny * 0.01;
            nikltl = nikl * 0.05;
            dimtl = dim * 0.10;
            qrtrtl = qrtr * 0.25;
            total = pnytl + nikltl + dimtl + qrtrtl;
            if(total > 1){
                cout<<"You have more than 1 dollar"<<endl; 
            }
            else if(total = 1){
                cout<<"You have 1 dollar"<<endl; 
            }
            else if(total < 1){
                cout<<"You have less than 1 dollar"<<endl; 
            }
            break;
        }
        case 10:{
            cout<<"You are in Problem 10 of Gaddis 8thEd Chap 4 Prob 16"
                  " Running the Race"<<endl;
            int time1,time2,time3;
            string runr1,runr2,runr3;
            cout<<"Enter the name of runner #1"<<endl;
            cin>>runr1;
            cout<<"Enter the name of runner #2"<<endl;
            cin>>runr2;
            cout<<"Enter the name of runner #3"<<endl;
            cin>>runr3;
            cout<<"Enter the time of runner 1 in seconds"<<endl;
            cin>>time1;
            while(time1 <= 0){
                cout<<"Error invaild input enter a positive time"<<endl;
                cin>>time1;
            }
            cout<<"Enter the time of runner 2 in seconds"<<endl;
            cin>>time2;
            while(time2 <= 0){
                cout<<"Error invaild input enter a positive time"<<endl;
                cin>>time2;
            }
            cout<<"Enter the time of runner 3 in seconds"<<endl;
            cin>>time3;
            while(time3 <= 0){
                cout<<"Error invaild input enter a positive time"<<endl;
                cin>>time3;
            }
            if (time1 < time2 && time1 < time3 && time2 < time3){
                cout<<"The results are in first place "<<runr1<<" With a time of "<<time1<<" seconds, in second place "<<runr2<<" with a time of "<<time2<<" seconds,"
                        " in third place "<<runr3<<" with a time of "<<time3<<" seconds"<<endl;
            }
            if (time1 < time3 && time1 < time2 && time3 < time2){
                cout<<"The results are in first place "<<runr1<<" With a time of "<<time1<<" seconds, in second place "<<runr3<<" with a time of "<<time3<<" seconds,"
                        " in third place "<<runr2<<" with a time of "<<time2<<" seconds"<<endl;
            }
            if (time2 < time1 && time2 < time3 && time1 < time3){
                cout<<"The results are in first place "<<runr2<<" With a time of "<<time2<<" seconds, in second place "<<runr1<<" with a time of "<<time1<<" seconds,"
                        " in third place "<<runr3<<" with a time of "<<time3<<" seconds"<<endl;
            }
            if (time2 < time3 && time2 < time1 && time3 < time1){
                cout<<"The results are in first place "<<runr2<<" With a time of "<<time2<<" seconds, in second place "<<runr3<<" with a time of "<<time3<<" seconds,"
                        " in third place "<<runr1<<" with a time of "<<time1<<" seconds"<<endl;
            }
            if (time3 < time1 && time3 < time2 && time1 < time2){
                cout<<"The results are in first place "<<runr3<<" With a time of "<<time3<<" seconds, in second place "<<runr1<<" with a time of "<<time1<<" seconds,"
                        " in third place "<<runr2<<" with a time of "<<time2<<" seconds"<<endl;
            }
            if (time3 < time2 && time3 < time1 && time2 < time1){
                cout<<"The results are in first place "<<runr3<<" With a time of "<<time3<<" seconds, in second place "<<runr2<<" with a time of "<<time2<<" seconds,"
                        " in third place "<<runr1<<" with a time of "<<time1<<" seconds"<<endl;
            }
            break;
        }
        default:{
            cout<<"You seem to have problems with instructions"<<endl;
            cout<<"You are unworthy of running this code"<<endl;
        }
    }
    
    //Exit the program
    return 0;
}