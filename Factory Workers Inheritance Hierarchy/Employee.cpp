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
/*
void Employee::setName()
{

}
void Employee::getName()
{

}
int Employee::setNumber()
{

}
int Employee::getNumber()
{

}*/
void Employee::printEmployee()
{
	std::cout << "Name: " << Employee::Name << std::endl << "Employee Number: " << Employee::Number << std::endl << "Date Hired: " << Employee::Date_Hired;
}