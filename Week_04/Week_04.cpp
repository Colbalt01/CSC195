// Week_04.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Person.h"

//Param is by value and is a copy
void AddByVal(int param) {
    param = param + 1;
}

//Pointers access the value of a memory location
void AddByPtr(int* ptr) {
    *ptr = *ptr + 1;
}

//By reference is creating an alias
void AddByRef(int& ref) {
    ref = ref + 1;
}

int main()
{
    Person people[5];
    Person* peoplePtr[5];
    people[0].age = 32;
    people[0].isAlive = true;
    //people[0].name = "Alastor"
    //strncpy(people[0].name, "bob", strlen("bob"));
    char charArray[] = { 'b', 'o', 'b', '\0' };
    people[0].name = charArray;

    peoplePtr[0] = new Person();
    peoplePtr[1] = &people[0];

    std::cout << "\n name = " << people[0].name;

    /*
    std::cout << "Hello World!\n";
    int iVal = 5;
    std::cout << "initial val = " << iVal;

    AddByVal(iVal);
    std::cout << "\n After AddByVal() iVal = " << iVal;

    AddByPtr(&iVal);
    std::cout << "\n After AddByPtr() iVal = " << iVal;

    AddByRef(iVal);
    std::cout << "\n After AddByRef() iVal = " << iVal;

    int& ref = iVal;
    ref++; //Increment iVal via alias
    std::cout << "\n After ++ iVal = " << iVal;
    */
}