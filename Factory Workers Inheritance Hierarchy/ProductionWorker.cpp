#include "ProductionWorker.h"
#include <iostream>
#include <string>

ProductionWorker::ProductionWorker(std::string E_Name, int E_Num, int day, int month, int year, int P_Shift, double P_Pay) : Employee(E_Name, E_Num, day, month, year)
{
	try {
	setShift(P_Shift);
	}
	catch (const InvalidShift& e) {
		std::cerr << e.what() << '\n';
	}
	try {
		setHourlyPay(P_Pay);
	}
	catch (const InvalidPayRate& e) {
		std::cerr << e.what() << '\n';
	}
}

void ProductionWorker::setShift(int P_Shift)
{
	if (P_Shift == 1 or P_Shift == 2) {
		shift = P_Shift;
	}
	else {
		throw InvalidShift("Invalid Shift! ");
	}
}

int ProductionWorker::getShift()
{
	return shift;
}

void ProductionWorker::setHourlyPay(double P_Pay)
{
	if (P_Pay > 0) {
		hourly_pay = P_Pay;
	}
	else {
		throw InvalidPayRate("Invalid Pay Rate! ");
	}
}

double ProductionWorker::getHourlyPay()
{
	return hourly_pay;
}

void ProductionWorker::printProductionWorker()
{
	ProductionWorker::printEmployee();
	std::cout << std::endl << "Shift: " << ProductionWorker::shift << std::endl << "Hourly Pay: $" << ProductionWorker::hourly_pay;
}