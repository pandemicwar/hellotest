/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: PANDEMIC
 *
 * Created on 20 мая 2017 г., 14:36
 */

#include <cstdlib>
#include <iostream>
#include "hellotest.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    hellotest hellotest("World");
    cout << hellotest.message() << endl;

    return 0;
}

