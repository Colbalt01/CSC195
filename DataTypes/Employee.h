#pragma once
const unsigned short maxDays = 7;

class Employee
{
public:


protected:

private:

	const float TAX = 0.01f;
	char name[31]; // array of char 0 long w/null terminator
	int age = 0;

	unsigned short shDaysWorked = 0;
	unsigned short hours[maxDays];
	float fGrossPay = 0;
	float fWage = 0;

public:
	Employee();
	void Read();
	void Write();
};