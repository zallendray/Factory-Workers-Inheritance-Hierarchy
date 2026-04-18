#ifndef SHIFTSUPERVISOR_H
#define SHIFTSUPERVISOR_H

#include "Employee.h"

class ShiftSupervisor : public Employee
{
private:
	int annual_salary;
	int annual_production_bonus;
public:
	ShiftSupervisor(std::string E_Name, int E_Num, int day, int month, int year, int Salary, int Bonus);
	void setSalary(int Salary);
	int getSalary();
	void setBonus(int Bonus);
	int getBonus();
	void printShiftSupervisor();
};

#endif
