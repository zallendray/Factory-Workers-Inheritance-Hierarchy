// Factory Workers Inheritance Hierarchy.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "ProductionWorker.h"
#include "ShiftSupervisor.h"
#include <string>

int main()
{
    ShiftSupervisor S("JON", 3350, 2, 3, 2000, 200000, 23);
    ProductionWorker E("Jimmy",1423,23,5,2006,1,27.4);

    E.printProductionWorker();
    S.printShiftSupervisor();
}
