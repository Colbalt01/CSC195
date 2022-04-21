#include "Employee.h"

void myMethod() {
	Employee* empPtr;
	empPtr = new Employee(); //Heap memory
	empPtr->Read(); //pointer

	int myInt = 5;
	int* intPtr;

	intPtr = &myInt;
	//std::cout << *intPtr;
	// do stuff and exit
	delete empPtr; //Free up memory
}
