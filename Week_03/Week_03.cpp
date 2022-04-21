// Week_03.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "MyDerived.h"
#include "MyConfig.h"

int main()
{
    std::cout << "Hello World!\n";
    MyDerived der = MyDerived();
    std::cout << der.AddSomething(3);
    
    Config conf;
    conf.moreStuff = 6;
    conf.something = 42;

    Config *people[2];
    people[0] = new Config();
    people[1] = new Config();

    people[0]->id = 1;
}
