#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
#include "Date.h"
#include <stdexcept>

class Employee
{
private:
	std::string Name;
	int Number = 0;
	Date Date_Hired;
public:
	Employee(std::string E_Name, int E_Num, int day, int month, int year);

	void setName(std::string Name);
	std::string getName();
	void setNumber(int Number);
	int getNumber();
	void setDate(int m, int d, int y);
	int getMonth();
	int getDay();
	int getYear();
	void printEmployee();

	class InvalidEmployeeNumber : public std::exception {
	private:
		std::string message = "Invalid Employee Number! :";
	public:
		InvalidEmployeeNumber(const std::string& msg) : message(msg) {}
		const char* what() const noexcept override {
			return message.c_str();
		}
	};
};

#endif
