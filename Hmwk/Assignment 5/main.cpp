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
#include <cstdlib>
#include <ctime>
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants
//Function Prototypes
void calculateRetail(float,float);//Function prototype
float getLength();         //Function to type in Length
float getWidth();          //Function to type in Width
float getArea(float,float);//Function to calculate Area
float displayData(float);  //Function to print out Area
float getSales(){
    float inputs;
    cout<<"Enter the four sales amounts for the company"<<endl;
    cin>>inputs;
    if(inputs<1){
        cout<<"ERROR invaild input, Enter the remaining sales"<<endl;
        cin>>inputs;
    }
    return inputs;
}
float findHighest(float nthWest,float sthWest, float nthEast, float sthEast){
    if(nthWest>sthWest&&nthWest>nthEast&&nthWest>sthEast){
        cout<<"The greatest sales is $"<<nthWest<<endl;
    }
    if(sthWest>nthWest&&sthWest>nthEast&&sthWest>sthEast){
        cout<<"The greatest sales is $"<<sthWest<<endl;
    }
    if(nthEast>sthWest&&nthEast>nthWest&&nthEast>sthEast){
        cout<<"The greatest sales is $"<<nthEast<<endl;
    }
    if(sthEast>sthWest&&sthEast>nthWest&&sthEast>nthEast){
        cout<<"The greatest sales is $"<<sthEast<<endl;
    }
}
int getnumAccidents(){
    int inputs;
    cout<<"Enter the five accident amounts recorded-north,south,east,west,central"<<endl;
    cin>>inputs;
    if(inputs<1){
        cout<<"ERROR invaild input, Enter the remaining accident reports"<<endl;
        cin>>inputs;
    }
    return inputs;
}
int findLowest(int north,int south,int east,int west,int central,string country){
    if(north<south&&north<east&&north<west&&north<central){
        cout<<"The lowest reported automobile accidents comes from north "<<country<<
                " reporting "<<north<<" accidents"<<endl;
    }
    if(south<north&&south<east&&south<west&&south<central){
        cout<<"The lowest reported automobile accidents comes from south "<<country<<
                " reporting "<<south<<" accidents"<<endl;
    }
    if(east<north&&east<south&&east<west&&east<central){
        cout<<"The lowest reported automobile accidents comes from east "<<country<<
                " reporting "<<east<<" accidents"<<endl;
    }
    if(west<north&&west<south&&west<east&&west<central){
        cout<<"The lowest reported automobile accidents comes from west "<<country<<
                " reporting "<<west<<" accidents"<<endl;
    }
    if(central<north&&central<south&&central<east&&central<west){
        cout<<"The lowest reported automobile accidents comes from central "<<country<<
                " reporting "<<central<<" accidents"<<endl;
    }
}
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
            float whlsl,  //Whole sale price
            mkupP;//Mark up percentage
            cout<<"Enter a monetary price value"<<endl;
            cin>>whlsl;
            while(whlsl<0){
                cout<<"ERROR try a positive monetary value"<<endl;
                cin>>whlsl;
            }
            cout<<"Enter a percentage for price mark up"<<endl;
            cin>>mkupP;
            while(mkupP<0){
                cout<<"ERROR try a positive percentage"<<endl;
            }
            calculateRetail(whlsl,mkupP);//Executing Function Variable
            break;
        }
        case 2:{
            float width;
            float length;
            float area;
            width = getLength();
            length = getWidth();
            area = getArea(length,width);
            displayData(area);
            break;
        }
        case 3:{
            float getSales(),findHighest(float,float,float,float),nthWest,sthWest,nthEast,sthEast;
            nthWest = getSales();
            sthWest = getSales();
            nthEast = getSales();
            sthEast = getSales();
            findHighest(nthWest,sthWest,nthEast,sthEast);
            break;
        }
        case 4:{
            string country;
            int getnumAccidents(),findLowest(int,int,int,int,int,string),north,south,east,west,central;
            cout<<"Enter the name of the country the accidents were recorded"<<endl;
            cin>>country;
            north = getnumAccidents();
            south = getnumAccidents();
            east = getnumAccidents();
            west = getnumAccidents();
            central = getnumAccidents();
            findLowest(north,south,east,west,central,country);
            break;
        }
        case 5:{
            float fallingDistance(float,float,float),d,g,t;
            g=9.8;
            t=1;
            fallingDistance(d,g,t);
            break;
        }
        case 6:{
            float kineticEnergy(float,float,float),KE,m,v;
            cout<<"Enter a mass to find Kinetic Energy"<<endl;
            cin>>m;
            cout<<"Enter a velocity to find Kinetic Energy"<<endl;
            cin>>v;
            kineticEnergy(KE,m,v);
            break;
        }
        case 7:{
            float celcius(float),F;
            F=0;
            for(int num=0;num<=20;num++){
                celcius(F);
                F++;
            }
            break;
        }
        case 8:{
            int coinToss(int),choice;
            unsigned seed=time(0);
            srand(seed);
            cout<<"How many number of times you like to flip a coin"<<endl;
            cin>>choice;
            coinToss(choice);
            break;
        }
        case 9:{
            float presentValue(float,float,float),F,r,n;
            cout<<"Enter the future value that you want in that account"<<endl;
            cin>>F;
            cout<<"Enter the annual interest rate"<<endl;
            cin>>r;
            cout<<"Enter the number of years that you plan to let your money sit"<<endl;
            cin>>n;
            presentValue(F,r,n);
            break;
        }
        case 10:{
            float futureValue(float,float,float),i,P,V,t;
            cout<<"Enter the present value of the account"<<endl;
            cin>>P;
            cout<<"Enter the monthly interest rate"<<endl;
            cin>>i;
            cout<<"Enter the number of months"<<endl;
            cin>>t;
            futureValue(t,P,i);
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
void calculateRetail(float whlsl,float mkupP){
    float retail = ((mkupP/100) * whlsl) + whlsl;//Retail price calculation
    cout<<"Your Wholesale price is $"<<whlsl<<" your mark up percentage is "<<mkupP<<"%"<<endl;
    cout<<"Your retail price is $"<<retail<<endl;
}
float getLength()
{
    cout<<"Enter a amount of length"<<endl;
    float L;
    cin>>L;
    while(L<1){
        cout<<"Error enter a length of size greater than 1"<<endl;
        cin>>L;
    }
    return L;
}
float getWidth(){
    cout<<"Enter a amount of width"<<endl;
    float W;
    cin>>W;
    while(W<1){
        cout<<"Error enter a width of size greater than 1"<<endl;
    }
    return W;
}
float getArea(float length,float width){
    float Area;
    Area = length * width;
    return Area;
}
float displayData(float area){
    cout<<"Your area size is "<<area<<endl;
    
}
float fallingDistance(float d,float g,float t){
    for(int num=0; num<10; num++){
        d = 0.5*(g*pow(t,2.0));
        t++;
        cout<<d<<"meters"<<endl;
    }
}
float kineticEnergy(float KE,float m,float v){
    KE = 0.5*(m*pow(v,2.0));
    cout<<KE<<" Kinetic Energy"<<endl;
}
float celcius (float F){
    float C;
    C=(0.56*F)-(32*0.56);
    cout<<C<<"celcius"<<endl;
}
float coinToss (int choice){
    float chnce;
    for(int num=0; num<choice; num++){
        chnce = rand() % 2+1;
        if(chnce==1){
            cout<<"It's Heads"<<endl;
        }
        else if(chnce==2){
            cout<<"It's Tails"<<endl;
        }
    }
}
float presentValue(float F,float r,float n){
    float P;
    P=(F / (1+pow(r,n)));
    cout<<"Your future value is $"<<P<<endl;
}
float futureValue(float t,float P,float i){
    float F;
    F=(P * (1+pow(i,t)));
    cout<<"Your future value is $"<<F<<endl;
}