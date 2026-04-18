#ifndef PRODUCTIONWORKER_H
#define PRODUCTIONWORKER_H

#include "Employee.h"
#include <string>

class ProductionWorker : public Employee
{
private:
	//1 = day, 2 = night
	int shift = 1;
	double hourly_pay = 1;
public:
	ProductionWorker(std::string E_Name, int E_Num, int day, int month, int year, int P_Shift, double P_Pay);
	void setShift(int P_Shift);
	int getShift();
	void setHourlyPay(double P_Pay);
	double getHourlyPay();
	void printProductionWorker();
};

#endif