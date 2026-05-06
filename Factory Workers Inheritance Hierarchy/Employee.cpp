#include "Employee.h"
#include <iostream>
#include <string>
#include <stdexcept>

Employee::Employee(std::string E_Name, int E_Num, int day, int month, int year)
{
	Name = E_Name;
	try {
		setNumber(E_Num);
	}
	catch (const InvalidEmployeeNumber& e) {
		std::cerr << e.what() << '\n';
	}
		
	Date_Hired.set_date(month, day, year);
}

void Employee::setName(std::string Name)
{
	Employee::Name = Name;
}

std::string Employee::getName()
{
	return Employee::Name;
}

void Employee::setNumber(int Number)
{
	if (Number > -1 and Number < 10000) {
		Employee::Number = Number;
	}
	else {
		throw InvalidEmployeeNumber("Invalid Employee Number! ");
	}
}

int Employee::getNumber()
{
	return Employee::Number;
}

void Employee::setDate(int m, int d, int y)
{
	Employee::Date_Hired.set_date(m, d, y);
}

int Employee::getMonth()
{
	return Employee::Date_Hired.get_month();
}

int Employee::getDay()
{
	return Employee::Date_Hired.get_day();
}

int Employee::getYear()
{
	return Employee::Date_Hired.get_year();
}

void Employee::printEmployee()
{
	std::cout << std::endl << std::endl << "Name: " << Employee::Name << std::endl << "Employee Number: " << Employee::Number << std::endl << "Date Hired: " << Employee::Date_Hired;
}