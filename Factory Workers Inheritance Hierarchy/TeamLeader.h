#ifndef TEAMLEADER_H
#define TEAMLEADER_H

#include "ProductionWorker.h"

class TeamLeader : public ProductionWorker
{
private:
	int monthly_bonus;
	int required_training_hours;
	int attended_training_hours;
public:
	TeamLeader(std::string E_Name, int E_Num, int day, int month, int year, int P_Shift, double P_Pay, int Bonus, int Required_Hours, int Attended_Hours);
	void setBonus(int Bonus);
	int getBonus();
	void setRequiredHours(int Required_Hours);
	int getRequiredHours();
	void setAttendedHours(int Attended_Hours);
	int getAttendedHours();
	void printTeamLeader();
};

#endif