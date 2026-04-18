#include "ProductionWorker.h"
#include <iostream>
#include <string>

ProductionWorker::ProductionWorker(std::string E_Name, int E_Num, int day, int month, int year, int P_Shift, double P_Pay) : Employee(E_Name, E_Num, day, month, year)
{
	if (P_Shift == 0 or P_Shift == 1) {
		shift = P_Shift;
	}
	else {
		shift = 0;
	}
	hourly_pay = P_Pay;
}

void ProductionWorker::setShift(int P_Shift)
{
	if (P_Shift == 0 or P_Shift == 1) {
		shift = P_Shift;
	}
	else {
		shift = 0;
	}
}

int ProductionWorker::getShift()
{
	return shift;
}

void ProductionWorker::setHourlyPay(double P_Pay)
{
	hourly_pay = P_Pay;
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