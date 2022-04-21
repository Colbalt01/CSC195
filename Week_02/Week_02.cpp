// Week_02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Employee.h"

int main()
{
    std::cout << "Hello World!\n";
    //const int arraySize = 3;
    Employee workers[2];
    //std::cout << sizeof(workers) / sizeof(workers[0]);
    //std::cout << "\n size 2 = " << std::size(workers);
    workers[0].Read(); // not a pointer

    Employee* empPtr = new Employee();
    std::cout << sizeof(Employee);
    void* ptr = malloc(10);
    //int myInt = 5;
    int* intPtr = new int;
    *intPtr = 6;
    //intPtr = &myInt;

    delete intPtr;

    int something = 1;
    //Get data for each employee
    /*for (int count = 0; count < (sizeof(workers)/sizeof(workers[0])); count++) {
        workers[count].Read();
    }*/
    //display data
   /* for (int count = 0; count < (sizeof(workers) / sizeof(workers[0])); count++) {
        workers[count].Write();
    }*/
}

