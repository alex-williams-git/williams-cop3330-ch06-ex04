/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Alexander Williams
 */

#include <iostream>
#include <vector>

class Name_value{
    public:
    Name_value(std :: string, int);
    void setString(std :: string);
    std :: string getString();
    void setValue(int);
    int getValue();
};

void checkVector(std :: vector<Name_value>, std :: string);

void printVector(std :: vector<Name_value>);