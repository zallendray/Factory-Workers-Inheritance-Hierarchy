#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
#include "Date.h"

class Employee
{
private:
	std::string Name;
	int Number = 0;
	Date Date_Hired;
public:
	Employee();

	void setName();
	void getName();
	int setNumber();
	int getNumber();
	void printEmployee();
};

#endif
