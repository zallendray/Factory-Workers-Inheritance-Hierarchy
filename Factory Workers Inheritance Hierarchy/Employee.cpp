#include "Employee.h"
#include <iostream>
#include <random>

Employee::Employee()
{
	std::random_device randev;
	std::mt19937 rng(randev());
	std::uniform_int_distribution<int>dist(0, 3);

	switch (dist(rng))
	{
	case 0:
		Employee::Name = "Tim";
		break;
	case 1:
		Employee::Name = "Jim";
		break;
	case 2:
		Employee::Name = "Rob";
		break;
	case 3: 
		Employee::Name = "Bob";
		break;
	}

	std::uniform_int_distribution<int>dist2(1000, 3000);
	Employee::Number = dist2(rng);

	std::uniform_int_distribution<int>dist3(1, 12);
	std::uniform_int_distribution<int>dist4(1, 31);

	Employee::Date_Hired.set_date(dist3(rng),dist4(rng),dist2(rng));
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
	std::cout << "Name: " << Employee::Name << std::endl << "Employee Number: " << Employee::Number << std::endl << "Date Hired: " << Employee::Date_Hired;
}