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
const int COLOR = 6;
const int SYMBOL = 12;
const int NUMBER = 67;
using namespace std;
int main(int argc, char** argv) {
    int cardr;
    int card[NUMBER];
    string type[COLOR][SYMBOL];
    int cnt=0;
        unsigned seed = time(0);
        for(int hand=0;hand<7;){
        int chance= 1;
        if(chance==1){
            for(int rcard=0;rcard<1;){
                cardr = rand() % 12+0;
                if(cardr==10){
                    type[hand][cnt]={ "Card RED Skip" };
                    cnt++;
                }
                else if(cardr==11){
                    type[hand][cnt]={ "Card RED Switch" };
                    cnt++;
                }
                else if(cardr==12){
                    type[hand][cnt]={ "Card RED Draw Two" };
                    cnt++;
                }
                else if(cardr<=9){
                    type[hand][cnt]={ "Card" };
                    card[hand]=cardr;
                    cnt++;                }
                rcard++;
                hand++;
            }
        }
    }
    return 0;
}