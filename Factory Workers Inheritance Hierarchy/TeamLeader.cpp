#include "TeamLeader.h"
#include <iostream>
#include <string>

TeamLeader::TeamLeader(std::string E_Name, int E_Num, int day, int month, int year, int P_Shift, double P_Pay, int Bonus, int Required_Hours, int Attended_Hours) : ProductionWorker(E_Name, E_Num, day, month, year, P_Shift, P_Pay)
{
	if (Bonus > 0) {
		monthly_bonus = Bonus;
	}
	else {
		monthly_bonus = 0;
	}
	if (Required_Hours > 0) {
		required_training_hours = Required_Hours;
	}
	else {
		required_training_hours = 0;
	}
	if (Attended_Hours > 0) {
		attended_training_hours = Attended_Hours;
	}
	else {
		attended_training_hours = 0;
	}
}

void TeamLeader::setBonus(int Bonus)
{
	if (Bonus > 0) {
		monthly_bonus = Bonus;
	}
}

int TeamLeader::getBonus()
{
	return monthly_bonus;
}

void TeamLeader::setRequiredHours(int Required_Hours)
{
	if (Required_Hours > 0) {
		required_training_hours = Required_Hours;
	}
	else {
		required_training_hours = 0;
	}
}

int TeamLeader::getRequiredHours()
{
	return required_training_hours;
}

void TeamLeader::setAttendedHours(int Attended_Hours)
{
	if (Attended_Hours > 0) {
		attended_training_hours = Attended_Hours;
	}
	else {
		attended_training_hours = 0;
	}
}

int TeamLeader::getAttendedHours()
{
	return attended_training_hours;
}

void TeamLeader::printTeamLeader()
{
	printProductionWorker();
	std::cout << std::endl << "Monthly Bonus: $" << TeamLeader::monthly_bonus << std::endl << "Required Training Hours: " << TeamLeader::required_training_hours << std::endl << "Attended Training Hours: " << TeamLeader::attended_training_hours << std::endl << std::endl;
}