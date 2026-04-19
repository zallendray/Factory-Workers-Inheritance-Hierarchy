// Factory Workers Inheritance Hierarchy.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "ProductionWorker.h"
#include "ShiftSupervisor.h"
#include "TeamLeader.h"
#include <string>

int main()
{
    ProductionWorker E("Jimmy",1423,23,5,2006,1,27.4);
    ShiftSupervisor S("JON", 3350, 2, 3, 2000, 200000, 23);
    TeamLeader T("Alex", 2412, 5, 3, 2004, 2, 27.54, 15, 40, 15);

    E.printProductionWorker();
    S.printShiftSupervisor();
    T.printTeamLeader();
}
