/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   newtestclass.cpp
 * Author: PANDEMIC
 *
 * Created on 20.05.2017, 14:46:08
 */

#include "newtestclass.h"
#include "hellotest.h"


CPPUNIT_TEST_SUITE_REGISTRATION(newtestclass);

newtestclass::newtestclass() {
}

newtestclass::~newtestclass() {
}

void newtestclass::setUp() {
}

void newtestclass::tearDown() {
}



void newtestclass::testMessageNobody() {
    hellotest _hellotest;
    string result = _hellotest.message();
    if (false /*check result*/) {
        CPPUNIT_ASSERT(result == "");
    }
}

