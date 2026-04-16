#ifndef PRODUCTIONWORKER_H
#define PRODUCTIONWORKER_H

#include "Employee.h"

class ProductionWorker : public Employee
{
private:
	//1 = day, 2 = night
	bool shift;
	double hourly_pay;
public:

};

#endif