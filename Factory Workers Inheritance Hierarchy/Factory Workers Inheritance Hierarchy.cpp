// Factory Workers Inheritance Hierarchy.cpp : This program uses the Employee, ProductionWorker, ShiftSupervisor and TeamLeader classes to demonstrate the use of exceptions.
//

#include <iostream>
#include "Employee.h"
#include "ProductionWorker.h"
#include "ShiftSupervisor.h"
#include "TeamLeader.h"
#include <string>


void enter_production_worker(ProductionWorker& P);
void enter_shift_supervisor(ShiftSupervisor&);
void enter_team_leader(TeamLeader&);

void enter_name(std::string& name);
void enter_number(int& number);
void enter_date(int& day, int& month, int& year);

int main()
{
    bool cont = true;
    int choice;
    //Employee E("Gerald", 5504, 25, 8, 2003);
    ProductionWorker P("Jimmy",1423,23,5,2006,2,27.4);
    ShiftSupervisor S("JON", 3350, 2, 3, 2000, 200000, 23);
    TeamLeader T("Alex", 2412, 5, 3, 2004, 2, 27.54, 15, 40, 15);

    //E.printEmployee();

    while (cont == true) {
        std::cout << std::endl << std::endl << "AVAILABLE ACTIONS: " << std::endl << std::endl << "1. Change data for ProductionWorker" << std::endl << "2. Change data for ShiftSupervisor" << std::endl
            << "3. Change data for TeamLeader" << std::endl << "4. Quit";

        std::cout << std::endl << std::endl << "Enter a number to choose an action: ";
        std::cin >> choice;
        switch (choice) {
        case 1:
            enter_production_worker(P);
            break;
        case 2:
            enter_shift_supervisor(S);
            break;
        case 3:
            enter_team_leader(T);
            break;
        case 4:
            exit(0);
        default:
            std::cin.clear();
            std::cin.ignore(100, '\n');
            std::cout << "THE ENTERED CHOICE IS INVALID, PLEASE TRY AGAIN!";
            break;
        }
    }


}

void enter_production_worker(ProductionWorker& P)
{
    bool fail = true;
    std::string name;
    int number, day, month, year;

    enter_name(name);

    P.setName(name);

    while (fail == true) {
        enter_number(number);
        try {
            P.setNumber(number);
            fail = false;
        }
        catch (const ShiftSupervisor::InvalidEmployeeNumber& e) {
            std::cin.clear();
            std::cin.ignore(100, '\n');
            std::cerr << e.what() << "Please enter a number between 0 and 9999. " << '\n';
        }
    }

    enter_date(day, month, year);
    P.setDate(month, day, year);

    P.printEmployee();
}

void enter_shift_supervisor(ShiftSupervisor& S)
{
    bool fail = true;
    std::string name;
    int number,day,month,year;

    enter_name(name);
    
    S.setName(name);

    while (fail == true) {
        enter_number(number);
        try {
            S.setNumber(number);
            fail = false;
        }
        catch (const ShiftSupervisor::InvalidEmployeeNumber& e) {
            std::cin.clear();
            std::cin.ignore(100, '\n');
            std::cerr << e.what() << "Please enter a number between 0 and 9999. " << '\n';
        }
    }

    enter_date(day, month, year);
    S.setDate(month, day, year);

    S.printEmployee();
}

void enter_team_leader(TeamLeader& T)
{
    bool fail = true;
    std::string name;
    int number, day, month, year;

    enter_name(name);

    T.setName(name);

    while (fail == true) {
        enter_number(number);
        try {
            T.setNumber(number);
            fail = false;
        }
        catch (const ShiftSupervisor::InvalidEmployeeNumber& e) {
            std::cin.clear();
            std::cin.ignore(100, '\n');
            std::cerr << e.what() << "Please enter a number between 0 and 9999. " << '\n';
        }
    }

    enter_date(day, month, year);
    T.setDate(month, day, year);

    T.printEmployee();
}

void enter_name(std::string& name)
{
    std::cout << "Enter Name: ";
    std::cin >> name;
}

void enter_number(int& number)
{
    std::cout << std::endl << "Enter Number: ";
    std::cin >> number;
}

void enter_date(int& day, int& month, int& year)
{
    std::cout << "Enter Employee Hire Year: ";
    std::cin >> year;
    std::cout << "Enter Employee Hire Month: ";
    std::cin >> month;
    std::cout << "Enter Employee Hire Day: ";
    std::cin >> day;
}