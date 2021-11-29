/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Alexander Williams
 */

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <vector>
#include "Name_value.cpp"

using namespace std;

// function to check vector for repeat names
void checkVector(vector<Name_value> vector, string string){
    for(int i = 0; i < vector.size(); i++){
        if(string == vector[i].getString()){
            printf("Name entered twice.");
            exit(-1);
        }
    }
}

// function to print the vector out
void printVector(vector <Name_value> vector){
    for(int i = 0; i < vector.size(); i++){
        cout << vector[i].getString() << " ";
        cout << vector[i].getValue() << endl;
    }
}

int main(){
    vector<Name_value> valueArray;
    string tempString = "n/a";
    int tempInt = -1;

    // while the user hasn't entered NoName and 0, add the input to the vector
    while((tempString != "NoName") && (tempInt != 0)){
        // scanning input
        cin >> tempString;
        scanf("%d", &tempInt);

        // checking for repeated names
        checkVector(valueArray, tempString);

        // add to the vector if the input is not NoName and 0
        if((tempString != "NoName") && (tempInt != 0)){
            Name_value tempClass(tempString, tempInt);
            valueArray.push_back(tempClass);
        }
    }

    // print vector
    printVector(valueArray);
}