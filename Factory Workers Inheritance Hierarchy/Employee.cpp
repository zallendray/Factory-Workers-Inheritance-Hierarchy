#include "Employee.h"
#include <iostream>
#include <string>

Employee::Employee(std::string E_Name, int E_Num, int day, int month, int year)
{
	Name = E_Name;
	Number = E_Num;
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
	Employee::Number = Number;
}

int Employee::getNumber()
{
	return Employee::Number;
}

void Employee::setDate(int m, int d, int y)
{
	Employee::Date_Hired.set_date(m, d, y);
}

int Employee::getMonth(int m)
{
	return Employee::Date_Hired.get_month();
}

int Employee::getDay(int d)
{
	return Employee::Date_Hired.get_day();
}

int Employee::getYear(int y)
{
	return Employee::Date_Hired.get_year();
}

void Employee::printEmployee()
{
	std::cout << std::endl << std::endl << "Name: " << Employee::Name << std::endl << "Employee Number: " << Employee::Number << std::endl << "Date Hired: " << Employee::Date_Hired;
}