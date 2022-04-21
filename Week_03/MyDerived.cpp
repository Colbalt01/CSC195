#include "MyDerived.h"


int MyDerived::AddSomething(int intVal) {
	return MyBase::AddSomething(intVal) + 1;
	//return intVal + 2;
}