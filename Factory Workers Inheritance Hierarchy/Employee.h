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

	void setName(std::string Name);
	std::string getName();
	void setNumber(int Number);
	int getNumber();
	void setDate(int m, int d, int y);
	int getMonth(int m);
	int getDay(int d);
	int getYear(int y);
	void printEmployee();
};

#endif
