/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: ntnam
 *
 * Created on September 27, 2017, 7:11 PM
 */

#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

/*
 * 
 */
int  i=0;
string str;
string outscreen(){
    cout << str.at(i)<<" ";
    i++;
    outscreen();
}
int main(int argc, char** argv) {
    cin >> str; 
    outscreen();
    return 0;
}

