#pragma once
class Employee
{
public:
	const float TAX = 0.01f;
	char name[31]; // array of char 0 long w/null terminator
	int age = 0;

protected:

private:

public:
	Employee();
	void Read();
	void Read(int x);
	void Write();

};

