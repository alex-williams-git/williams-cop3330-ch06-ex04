/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Alexander Williams
 */

#include <string>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

class Name_value{
    // getters and setters and constructor
    public:
    Name_value(string string, int value){
        setString(string);
        setValue(value);
    }
    void setString(string s){
        name = s;
    }
    string getString(){
        return name;
    }
    void setValue(int v){
        score = v;
    }
    int getValue(){
        return score;
    }

    private:
    string name;
    int score;
};