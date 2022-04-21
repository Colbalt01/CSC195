// DataTypes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    string name = "";
    char initial = ' ';
    unsigned short age = 0;
    bool isAdult = false;
    unsigned int zipcode= 00000;
    float wage= 0.0f;
    const float TAX = 0.01f;
    unsigned short daysWorked = 0;
    short hoursWorkedPerDay[7];
    unsigned short totalHours = 0;
    float grossPay = 0;
    float netPay = 0;


    cout << "enter first name: ";
    cin >> name;
    cout << "enter last initial: ";
    cin >> initial;
    cout << "enter age: ";
    cin >> age;
    if (age >= 18) {
        isAdult = true;
    }
    else {
        isAdult = false;
    }

    cout << "enter zipcode: ";
    cin >> zipcode;
    cout << "enter wage: ";
    cin >> wage;
    cout << "enter days worked: ";
    cin >> daysWorked;

    for (int i = 0; i < daysWorked; i++)
    {
        cout << "enter hours worked for day " << i+1 << ": ";
        cin >> hoursWorkedPerDay[i];
        totalHours += hoursWorkedPerDay[i];

        grossPay += (wage * hoursWorkedPerDay[i]);
    }
    netPay = grossPay * TAX;

    cout << "name: " << name << "; initial: " << initial << "; age: " << age << "; wage: $" << wage << "\n";
    cout << name << "worked " << totalHours << " hours at $" << wage << "an hour\n";
    cout << "gross pay: " << grossPay;
    cout << "\nnet income: " << netPay;
}