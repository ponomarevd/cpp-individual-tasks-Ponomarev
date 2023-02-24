#include "Date1.h"
#include <iostream>
#include <regex>
using namespace std;

void Date1::SetYear(unsigned int value) {
	year_ = value;
}
void Date1::SetMonth(unsigned int value) {
	month_ = value;
}
void Date1::SetDay(unsigned int value) {
	day_ = value;
}

void Date1::Comparsion(Date1& dateToComparsion)
{
	if (dateToComparsion.GetDay() < day_ && dateToComparsion.GetMonth() < month_ && dateToComparsion.GetYear() < year_)
		cout << "До" << endl;
	else if (dateToComparsion.GetDay() == day_ && dateToComparsion.GetMonth() == month_ && dateToComparsion.GetYear() == year_)
		cout << "Равно" << endl;
	else
		cout << "После" << endl;
}

int Date1::GetDaysCountBetweenDate(Date1&)
{
	return 0;
}

void Date1::InitializeByNumbers()
{
	int day, month, year;
	cout << "Day: " && cin >> day;
	cout << "Month: " && cin >> month;
	cout << "Year: " && cin >> year;
	cout << endl;

	if (CheckValid(day, month, year)) {
		SetDay(day);
		SetMonth(month);
		SetYear(year);
	}
	else {
		cout << "Дата имела неверный формат" << endl;
		cin.clear();
	}
}

void Date1::InitializeByString()
{
	string date;
	int day, month, year;
	cout << "YYYY:MM:DD: " && cin >> date;
	regex rx("\\d{4}[:]\\d{2}[:]\\d{2}");
	if (regex_match(date, rx)) {
		year = stoi(date.substr(0, 4));
		month = stoi(date.substr(5, 7));
		day = stoi(date.substr(8, 10));

		SetDay(day);
		SetMonth(month);
		SetYear(year);
	}
	else {
		cout << "Дата имела неверный формат" << endl;
		cin.clear();
	}
}

void Date1::InitializeByDate(Date1& date)
{
	SetDay(date.GetDay());
	SetMonth(date.GetMonth());
	SetYear(date.GetYear());
}

void Date1::AddDays()
{
}

void Date1::DeleteDays()
{
}

void Date1::IsLeapYear()
{
	if (this->year_ % 4 == 0) {
		cout << this->year_ << " високосный" << endl;
	}
	else {
		cout << this->year_ << " не високосный" << endl;
	}
}

bool Date1::CheckValid(unsigned int day, unsigned int month, unsigned int year) {
	if (day > 31 || day == 0 || month > 12 || month == 0 ) {
		return false;
	}
	else {
		return true;
	}
}
