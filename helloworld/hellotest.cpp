/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   hellotest.cpp
 * Author: PANDEMIC
 * 
 * Created on 20 мая 2017 г., 14:39
 */

#include "hellotest.h"

hellotest::hellotest(const string& aWho) {
    who=aWho;
}

hellotest::hellotest(const hellotest& orig) {
}

hellotest::~hellotest() {
}

string hellotest::message() const
{
    return (string)"HelloHELLO " + who;
}
