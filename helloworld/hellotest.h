/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   hellotest.h
 * Author: PANDEMIC
 *
 * Created on 20 мая 2017 г., 14:39
 */

#ifndef HELLOTEST_H
#define HELLOTEST_H
#include <iostream>
using namespace std;
class hellotest {
public:
    hellotest();
    hellotest(const string& aWho);
    hellotest(const& orig);
    virtual ~hellotest();
    string message() const;
private:
    string who;
};

#endif /* HELLOTEST_H */

