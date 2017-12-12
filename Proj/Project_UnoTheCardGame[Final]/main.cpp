/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Joshua Ludwig
 *
 * Created on November 2, 2017, 10:31 AM
 * Purpose: UNO Card Game
 */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <cstdlib>
#include <iomanip>
const int COLOR = 5;
const int SYMBOL = 12;
const int NUMBER = 67;
void CPU(std::string[],std::string[],int[]);
using namespace std;
int main(int argc, char** argv) {
    int card[NUMBER];
    string type[NUMBER];
    string color[NUMBER];
    int Ccard[NUMBER];
    string Ctype[NUMBER];
    string Ccolor[NUMBER];
    int cardr,cardb,cardg,cardy,top;
    int temp[NUMBER];
    string temp1[NUMBER];
    string temp2[NUMBER];
    unsigned seed = time(0);
    srand(seed);
    int a[NUMBER];
    string b[NUMBER];
    string c[NUMBER];
    int cnt=0;
    int size=0;
    int Csize=0;
    int Ccnt=0;
    int m=0;
    cout<<"Your hand is a ";
    for(int hand=0;hand<7;){
        float chance= rand() % 6+1;
        if(chance==1){
            for(int rcard=0;rcard<1;){
                cardr = rand() % 12+0;
                if(cardr==10){
                    card[cnt]=10;
                    type[cnt]={ "RedSkip" };
                    color[cnt]={ "Red" };
                    size++;
                }
                else if(cardr==11){
                    card[cnt]=11;
                    type[cnt]={ "RedSwitch" };
                    color[cnt]={ "Red" };
                    size++;
                }
                else if(cardr==12){
                    card[cnt]=12;
                    type[cnt]={ "RedDrawTwo" };
                    color[cnt]={ "Red" };
                    size++;
                }
                else if(cardb<=9){
                    type[cnt]={ "Red" };
                    card[cnt]=cardr;
                    color[cnt]={ "Red" };
                    size++;
                }
                rcard++;
                hand++;
            }
        }
        if(chance==2){
            for(int bcard=0;bcard<1;){
                cardb = rand() % 12+0;
                if(cardb==10){
                    card[cnt]=10;
                    type[cnt]={ "BlueSkip" };
                    color[cnt]={ "Blue" };
                    size++;
                }
                else if(cardb==11){
                    card[cnt]=11;
                    type[cnt]={ "BlueSwitch" };
                    color[cnt]={ "Blue" };
                    size++;
                }
                else if(cardb==12){
                    card[cnt]=12;
                    type[cnt]={ "BlueDrawTwo" };
                    color[cnt]={ "Blue" };
                    size++;
                }
                else if(cardb<=9){
                    type[cnt]={ "Blue" };
                    card[cnt]=cardb;
                    color[cnt]={ "Blue" };
                    size++;
                }
                bcard++;
                hand++;
            }
        }
        if(chance==3){
            for(int ycard=0;ycard<1;){
                cardy = rand() % 12+0;
                if(cardy==10){
                    card[cnt]=10;
                    type[cnt]={ "YellowSkip" };
                    color[cnt]={ "Yellow" };
                    size++;
                }
                else if(cardy==11){
                    card[cnt]=11;
                    type[cnt]={ "YellowSwitch" };
                    color[cnt]={ "Yellow" };
                    size++;
                }
                else if(cardy==12){
                    card[cnt]=12;
                    type[cnt]={ "YellowDrawTwo" };
                    color[cnt]={ "Yellow" };
                    size++;
                }
                else if(cardy<=9){
                    type[cnt]={ "Yellow" };
                    card[cnt]=cardy;
                    color[cnt]={ "Yellow" };
                    size++;
                }
                ycard++;
                hand++;
            }
        }
        if(chance==4){
            for(int gcard=0;gcard<1;){
                cardg = rand() % 12+0;
                if(cardg==10){
                    card[cnt]=10;
                    type[cnt]={ "GreenSkip" };
                    color[cnt]={ "Green" };
                    size++;
                }
                else if(cardg==11){
                    card[cnt]=11;
                    type[cnt]={ "GreenSwitch" };
                    color[cnt]={ "Green" };
                    size++;
                }
                else if(cardg==12){
                    card[cnt]=12;
                    type[cnt]={ "GreenDrawTwo" };
                    color[cnt]={ "Green" };
                    size++;
                }
                else if(cardg<=9){
                    type[cnt]={ "Green" };
                    card[cnt]=cardg;
                    color[cnt]={ "Green" };
                    size++;
                }
                gcard++;
                hand++;
            }
        }
        if(chance==5){
            type[cnt]={ "WildCard" };
            card[cnt]=13;
            color[cnt]={ "Wild" };
            hand++;
            size++;
        }
        if(chance==6){
            card[cnt]=14;
            type[cnt]={ "+4WildCard" };
            color[cnt]={ "+4Wild" };
            hand++;
            size++;
        }
        cnt++;
    }
    for(int hand=0;hand<7;){
        float chance= rand() % 6+1;
        if(chance==1){
            for(int rcard=0;rcard<1;){
                cardr = rand() % 12+0;
                if(cardr==10){
                    Ccard[Ccnt]=10;
                    Ctype[Ccnt]={ "RedSkip" };
                    Ccolor[Ccnt]={ "Red" };
                    Csize++;
                }
                else if(cardr==11){
                    Ccard[Ccnt]=11;
                    Ctype[Ccnt]={ "RedSwitch" };
                    Ccolor[Ccnt]={ "Red" };
                    Csize++;
                }
                else if(cardr==12){
                    Ccard[Ccnt]=12;
                    Ctype[Ccnt]={ "RedDrawTwo" };
                    Ccolor[Ccnt]={ "Red" };
                    Csize++;
                }
                else if(cardb<=9){
                    Ctype[Ccnt]={ "Red" };
                    Ccard[Ccnt]=cardr;
                    Ccolor[Ccnt]={ "Red" };
                    Csize++;
                }
                rcard++;
                hand++;
            }
        }
        if(chance==2){
            for(int bcard=0;bcard<1;){
                cardb = rand() % 12+0;
                if(cardb==10){
                   Ccard[Ccnt]=10;
                    Ctype[Ccnt]={ "BlueSkip" };
                    Ccolor[Ccnt]={ "Blue" };
                    Csize++;
                }
                else if(cardb==11){
                    Ccard[Ccnt]=11;
                    Ctype[Ccnt]={ "BlueSwitch" };
                    Ccolor[Ccnt]={ "Blue" };
                    Csize++;
                }
                else if(cardb==12){
                    Ccard[Ccnt]=12;
                    Ctype[Ccnt]={ "BlueDrawTwo" };
                    Ccolor[Ccnt]={ "Blue" };
                    Csize++;
                }
                else if(cardb<=9){
                    Ctype[Ccnt]={ "Blue" };
                    Ccard[Ccnt]=cardb;
                    Ccolor[Ccnt]={ "Blue" };
                    Csize++;
                }
                bcard++;
                hand++;
            }
        }
        if(chance==3){
            for(int ycard=0;ycard<1;){
                cardy = rand() % 12+0;
                if(cardy==10){
                    Ccard[Ccnt]=10;
                    Ctype[Ccnt]={ "YellowSkip" };
                    Ccolor[Ccnt]={ "Yellow" };
                    Csize++;
                }
                else if(cardy==11){
                    Ccard[Ccnt]=11;
                    Ctype[Ccnt]={ "YellowSwitch" };
                    Ccolor[Ccnt]={ "Yellow" };
                    Csize++;
                }
                else if(cardy==12){
                    Ccard[Ccnt]=12;
                    Ctype[Ccnt]={ "YellowDrawTwo" };
                    Ccolor[Ccnt]={ "Yellow" };
                    Csize++;
                }
                else if(cardy<=9){
                    Ctype[Ccnt]={ "Yellow" };
                    Ccard[Ccnt]=cardy;
                    Ccolor[Ccnt]={ "Yellow" };
                    Csize++;
                }
                ycard++;
                hand++;
            }
        }
        if(chance==4){
            for(int gcard=0;gcard<1;){
                cardg = rand() % 12+0;
                if(cardg==10){
                    Ccard[Ccnt]=10;
                    Ctype[Ccnt]={ "GreenSkip" };
                    Ccolor[Ccnt]={ "Green" };
                    Csize++;
                }
                else if(cardg==11){
                    Ccard[Ccnt]=11;
                    Ctype[Ccnt]={ "GreenSwitch" };
                    Ccolor[Ccnt]={ "Green" };
                    Csize++;
                }
                else if(cardg==12){
                    Ccard[Ccnt]=12;
                    Ctype[Ccnt]={ "GreenDrawTwo" };
                    Ccolor[Ccnt]={ "Green" };
                    Csize++;
                }
                else if(cardg<=9){
                    Ctype[Ccnt]={ "Green" };
                    Ccard[Ccnt]=cardg;
                    Ccolor[Ccnt]={ "Green" };
                    Csize++;
                }
                gcard++;
                hand++;
            }
        }
        if(chance==5){
            Ctype[Ccnt]={ "WildCard" };
            Ccard[Ccnt]=13;
            Ccolor[Ccnt]={ "Wild" };
            hand++;
            Csize++;
        }
        if(chance==6){
            Ccard[Ccnt]=14;
            Ctype[Ccnt]={ "+4WildCard" };
            Ccolor[Ccnt]={ "+4Wild" };
            hand++;
            Csize++;
        }
        Ccnt++;
    }
    for(int a=0;a<7;){
        if(card[a]>=10){
            cout<<type[a]<<", ";
            a++;
        }
        else if(card[a]<=9){
            cout<<type[a]<<" "<<card[a]<<", ";
            a++;
        }
    }
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"Now player 2 look away so player 1 may see his hand. Scroll up to see"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    for(int a=0;a<7;){
        if(Ccard[a]>=10){
            cout<<Ctype[a]<<", ";
            a++;
        }
        else if(Ccard[a]<=9){
            cout<<Ctype[a]<<" "<<Ccard[a]<<", ";
            a++;
        }
    }
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"Now player 1 look away so player 2 may see his hand. Scroll up to see"<<endl;
    int dec=rand() % 6+1;
    if(dec==1){
        for(int rcard=0;rcard<1;){
            cardr = rand() % 12+0;
            if(cardr==10){
                card[cnt]=cardr;
                temp[cnt]=card[cnt];
                cout<<"The top card is a RedSkip"<<endl;
                color[cnt]={ "Red" };
                temp1[cnt]=color[cnt];
            }
            else if(cardr==11){
                card[cnt]=cardr;
                temp[cnt]=card[cnt];
                cout<<"The top card is a RedSwitch"<<endl;
                color[cnt]={ "Red" };
                temp1[cnt]=color[cnt];
            }
            else if(cardr==12){
                cout<<"The top card is a RedDrawTwo"<<endl;
                card[cnt]=cardr;
                temp[cnt]=card[cnt];
                color[cnt]={ "Red" };
                temp1[cnt]=color[cnt];
            }
            else if(cardb<=9){
                cout<<"The top card is a Red "<<cardr<<endl;
                card[cnt]=cardr;
                temp[cnt]=card[cnt];
                color[cnt]={ "Red" };
                temp1[cnt]=color[cnt];
            }
            rcard++;
        }
    }
    if(dec==2){
        for(int bcard=0;bcard<1;){
            cardb = rand() % 12+0;
            if(cardb==10){
                cout<<"The top card is a BlueSkip"<<endl;
                card[cnt]=cardb;
                temp[cnt]=card[cnt];
                color[cnt]={ "Blue" };
                temp1[cnt]=color[cnt];
            }
            else if(cardb==11){
                cout<<"The top card is a BlueSwitch"<<endl;
                card[cnt]=cardb;
                temp[cnt]=card[cnt];
                color[cnt]={ "Blue" };
                temp1[cnt]=color[cnt];
            }
            else if(cardb==12){
                cout<<"The top card is a BlueDrawTwo"<<endl;
                card[cnt]=cardb;
                temp[cnt]=card[cnt];
                color[cnt]={ "Blue" };
                temp1[cnt]=color[cnt];
            }
            else if(cardb<=9){
                cout<<"The top card is a Blue "<<cardb<<endl;
                card[cnt]=cardb;
                temp[cnt]=card[cnt];
                color[cnt]={ "Blue" };
                temp1[cnt]=color[cnt];
            }
            bcard++;
        }
    }
    if(dec==3){
        for(int ycard=0;ycard<1;){
            cardy = rand() % 12+0;
            if(cardy==10){
                cout<<"The top card is a YellowSkip"<<endl;
                card[cnt]=cardy;
                temp[cnt]=card[cnt];
                color[cnt]={ "Yellow" };
                temp1[cnt]=color[cnt];
            }
            else if(cardy==11){
                cout<<"The top card is a YellowSwitch"<<endl;
                card[cnt]=cardy;
                temp[cnt]=card[cnt];
                color[cnt]={ "Yellow" };
                temp1[cnt]=color[cnt];
            }
            else if(cardy==12){
                cout<<"The top card is a YellowDrawTwo"<<endl;
                card[cnt]=cardy;
                temp[cnt]=card[cnt];
                color[cnt]={ "Yellow" };
                temp1[cnt]=color[cnt];
            }
            else if(cardy<=9){
                cout<<"The top card is a Yellow "<<cardy<<endl;
                card[cnt]=cardy;
                temp[cnt]=card[cnt];
                color[cnt]={ "Yellow" };
                temp1[cnt]=color[cnt];
            }
            ycard++;
        }
    }
    if(dec==4){
        for(int gcard=0;gcard<1;){
            cardg = rand() % 12+0;
            if(cardg==10){
                cout<<"The top card is a GreenSkip"<<endl;
                card[cnt]=cardg;
                temp[cnt]=card[cnt];
                color[cnt]={ "Green" };
                temp1[cnt]=color[cnt];
            }
            else if(cardg==11){
                cout<<"The top card is a GreenSwitch"<<endl;
                card[cnt]=cardg;
                temp[cnt]=card[cnt];
                color[cnt]={ "Green" };
                temp1[cnt]=color[cnt];
            }
            else if(cardg==12){
                cout<<"The top card is a GreenDrawTwo"<<endl;
                card[cnt]=cardg;
                temp[cnt]=card[cnt];
                color[cnt]={ "Green" };
                temp1[cnt]=color[cnt];
            }
            else if(cardg<=9){
                cout<<"The top card is a Green "<<cardg<<endl;
                card[cnt]=cardg;
                temp[cnt]=card[cnt];
                color[cnt]={ "Green" };
                temp1[cnt]=color[cnt];
            }
            gcard++;
        }
    }
    if(dec==5){
        cout<<"The top card is a Wild Card"<<endl;
        card[cnt]=13;
        temp[cnt]=card[cnt];
        color[cnt]={ "Wild" };
        temp1[cnt]=color[cnt];
    }
    if(dec==6){
        cout<<"The top card is a +4 Wild Card"<<endl;
        card[cnt]=14;
        temp[cnt]=card[cnt];
        color[cnt]={ "+4Wild" };
        temp1[cnt]=color[cnt];
    }
    for(int Po=0;Po<1;){
        int d;
        cin>>d;
        if(card[d]!=temp[cnt]&&color[d]!=temp1[cnt]){//If a card going to be put down is not the same normal color or number/symbol
            if(color[d]=="Wild"||color[d]=="+4Wild"){
                cout<<type[d]<<endl;
                a[d]=card[d];
                b[d]=color[d];
                c[d]=type[d];
                cnt=d;
            }
            else if(temp1[cnt]=="Wild"||temp1[cnt]=="+4Wild"){//If the top card on the pile is a Wild or Wild+4
                if(card[d]<=9){
                    cout<<color[d]<<" "<<card[d]<<endl;
                    c[d]=type[d];
                    b[d]=color[d];
                    a[d]=card[d];
                    cnt=d;
                }
                else{//If the card put down on top of a Wild or Wild+4 is a skip, switch, or draw two
                    cout<<type[d]<<endl;
                    c[d]=type[d];
                    b[d]=color[d];
                    a[d]=card[d];
                    cnt=d;
                }
            }
            else if(temp1[cnt]!="Wild"||temp1[cnt]!="+4Wild"||temp1[d]!="Wild"||temp1[d]!="+4Wild"){//No valid card choice
                cout<<"Error try again, choose another card"<<endl;
                cin>>d;
            }
        }
        else if(d<=-1||d>=7){
            cout<<"Error try again, choose another card"<<endl;
            cin>>d;
        }
        else if(card[d]==temp[cnt]){
            if(card[d]=10){
                cout<<type[d]<<endl;
                c[d]=type[d];
                b[d]=color[d];
                a[d]=card[d];
            }
            else if(card[d]=11){
                cout<<type[d]<<endl;
                c[d]=type[d];
                b[d]=color[d];
                a[d]=card[d];
            }
            else if(card[d]=12){
                cout<<type[d]<<endl;
                c[d]=type[d];
                b[d]=color[d];
                a[d]=card[d];
            }
            else if(card[d]<=9){
                cout<<color[d]<<" "<<card[d]<<endl;
                c[d]=type[d];
                b[d]=color[d];
                a[d]=card[d];
            }
            cnt=d;
        }
        else if(color[d]==temp1[cnt]&&card[d]!=temp[cnt]){
            if(color[d]=="Wild"||color[d]=="+4Wild"){
                cout<<type[d]<<endl;
                c[d]=type[d];
                b[d]=color[d];
                a[d]=card[d];
                cnt=d;
            }
            else if(type[d]=="RedSkip"||type[d]=="RedSwitch"||type[d]=="RedDrawTwo"){
                cout<<type[d]<<endl;
                c[d]=type[d];
                b[d]=color[d];
                a[d]=card[d];
                cnt=d;
            }
            else if(type[d]=="BlueSkip"||type[d]=="BlueSwitch"||type[d]=="BlueDrawTwo"){
                cout<<type[d]<<endl;
                c[d]=type[d];
                b[d]=color[d];
                a[d]=card[d];
                cnt=d;
            }
            else if(type[d]=="YellowSkip"||type[d]=="YellowSwitch"||type[d]=="YellowDrawTwo"){
                cout<<type[d]<<endl;
                c[d]=type[d];
                b[d]=color[d];
                a[d]=card[d];
                cnt=d;
            }
            else if(type[d]=="GreenSkip"||type[d]=="GreenSwitch"||type[d]=="GreenDrawTwo"){
                cout<<type[d]<<endl;
                c[cnt]=type[d];
                b[cnt]=color[d];
                a[cnt]=card[d];
                cnt=d;
            }
            else{
                cout<<color[d]<<" "<<card[d]<<endl;
                c[cnt]=type[d];
                b[cnt]=color[d];
                a[cnt]=card[d];
                cnt=d;
            }
        }
        Po++;
        size--;
        }
        for(int Pt=0;Pt<1;){
        int p;
        cin>>p;
        if(card[p]!=a[cnt]&&color[p]!=b[cnt]){//If a card going to be put down is not the same normal color or number/symbol
            if(color[p]=="Wild"||color[p]=="+4Wild"){
                cout<<type[p]<<endl;
                temp2[cnt]=type[p];
            }
            else if(color[cnt]=="Wild"||color[cnt]=="+4Wild"){//If the top card on the pile is a Wild or Wild+4
                if(card[p]<=9){
                    cout<<color[p]<<" "<<card[p]<<endl;
                    temp1[cnt]=color[p];
                    temp[cnt]=card[p];
                }
                else{//If the card put down on top of a Wild or Wild+4 is a skip, switch, or draw two
                    cout<<type[p]<<endl;
                    temp2[cnt]=type[p];
                }
            }
            else if(b[cnt]!="Wild"||b[cnt]!="+4Wild"||b[p]!="Wild"||b[p]!="+4Wild"){//No valid card choice
                cout<<"Error try again, choose another card"<<endl;
                cin>>p;
            }
        }
        else if(p<=-1||p>=7){
            cout<<"Error try again, choose another card"<<endl;
            cin>>p;
        }
        else if(card[p]==a[cnt]){
            if(card[p]=10){
                cout<<type[p]<<endl;
                temp2[cnt]=c[p];
            }
            else if(card[p]=11){
                cout<<type[p]<<endl;
                temp2[cnt]=c[p];
            }
            else if(card[p]=12){
                cout<<type[p]<<endl;
                temp2[cnt]=c[p];
            }
            else if(card[p]<=9){
                cout<<color[p]<<" "<<card[p]<<endl;
                temp2[cnt]=c[p];
            }
        }
        else if(color[p]==b[cnt]&&card[p]!=a[cnt]){
            if(color[p]=="Wild"||color[p]=="+4Wild"){
                cout<<type[p]<<endl;
                temp2[cnt]=c[p];
            }
            else if(type[p]=="RedSkip"||type[p]=="RedSwitch"||type[p]=="RedDrawTwo"){
                cout<<type[p]<<endl;
                temp2[cnt]=c[p];
            }
            else if(type[p]=="BlueSkip"||type[p]=="BlueSwitch"||type[p]=="BlueDrawTwo"){
                cout<<type[p]<<endl;
                temp2[cnt]=c[p];
            }
            else if(type[p]=="YellowSkip"||type[p]=="YellowSwitch"||type[p]=="YellowDrawTwo"){
                cout<<type[p]<<endl;
                temp2[cnt]=c[p];
            }
            else if(type[p]=="GreenSkip"||type[p]=="GreenSwitch"||type[p]=="GreenDrawTwo"){
                cout<<type[p]<<endl;
                temp2[cnt]=c[p];
            }
            else{
                cout<<color[p]<<" "<<card[p]<<endl;
                temp1[cnt]=b[p];
                temp[cnt]=a[p];
            }
        }
        Pt++;
        size--;
    }   
    return 0;
}

