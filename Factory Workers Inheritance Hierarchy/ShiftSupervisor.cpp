#include "ShiftSupervisor.h"
#include <iostream>
#include <string>

ShiftSupervisor::ShiftSupervisor(std::string E_Name, int E_Num, int day, int month, int year, int Salary, int Bonus) : Employee(E_Name, E_Num, day, month, year)
{
	if (Salary > 0) {
		annual_salary = Salary;
	}
	else {
		annual_salary = 0;
	}
	if (Bonus > 0) {
		annual_production_bonus = Bonus;
	}
	else {
		annual_production_bonus = 0;
	}
}

void ShiftSupervisor::setSalary(int Salary)
{
	if (Salary > 0) {
		annual_salary = Salary;
	}
	else {
		annual_salary = 0;
	}
}

int ShiftSupervisor::getSalary()
{
	return annual_salary;
}

void ShiftSupervisor::setBonus(int Bonus)
{
	if (Bonus > 0) {
		annual_production_bonus = Bonus;
	}
	else {
		annual_production_bonus = 0;
	}
}

int ShiftSupervisor::getBonus()
{
	return annual_production_bonus;
}

void ShiftSupervisor::printShiftSupervisor()
{
	ShiftSupervisor::printEmployee();
	std::cout << std::endl << "Annual Salary: $" << ShiftSupervisor::annual_salary << std::endl << "Annual Production Bonus: $" << ShiftSupervisor::annual_production_bonus;
}