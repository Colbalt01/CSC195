#include "Employee.h"

#include <iostream>
#include <string.h>



Employee::Employee() {
    //memset(this->name, '\0', sizeof(this->name));
}
//
void Employee::Read() {
    //Get name
    //Get age
    // Get number of days worked
    //Get etc...

    //get hours worked
    for (int i = 0; i < shDaysWorked; i++)
    {
        std::cout << "enter hours worked for day " << (i + 1) << ": ";
        std::cin >> hours[i];

        //Calc pay
        fGrossPay = (fWage * hours[i]);
    }
}
//
void Employee::Write() {
    //Write all the data for the person
}