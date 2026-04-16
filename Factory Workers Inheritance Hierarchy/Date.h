#ifndef DATE_H
#define DATE_H
#include <iostream>


class Date
{
private:
	int month, day, year;

public:
	Date(int m = 1, int d = 1, int y = 1900);
	void set_date(int m, int d, int y);

	int get_month() const;
	int get_day() const;
	int get_year() const;

	bool is_leap_year() const;
	bool is_leap_year(int year) const;

	int last_day() const;
	int last_day(int month, int year) const;

	void print_date();

	Date operator++();
	Date operator++(int);

	Date operator--();
	Date operator--(int);

	int operator-(const Date& rhs);

	friend std::ostream& operator<<(std::ostream& out, const Date& obj);
	friend std::istream& operator>>(std::istream& in, Date& obj);
};

#endif