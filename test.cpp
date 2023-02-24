#include "test.h"
#include <math.h>
#include <iostream>
#include <windows.h>
using namespace std;

double test::PowDI(double &a, int &b)
{
	return pow(a, b);
}

double test::PowDD(double &a, double &b)
{
	return pow(a, b);
}

double test::DoubleInt(int &a, int &b)
{
	return b == 0 ? throw std::overflow_error("Делить на 0 нельзя!") :  a / b;
}

int test::MoneyCounter(int& nominal, int& count)
{
	int Nominals[6] = {50, 100, 500, 1000, 2000, 5000};
	for (int nom : Nominals) {
		if (nom == nominal) return nominal * count;	
	}
	return 0;
}

double test::PriceOfGood(double& goodPrice, int& count)
{
	return goodPrice * count;
}

double test::ProductСalories(int& calories, double& mass)
{
	return calories * 100 / mass;
}

bool test::IsNumberInRange(double& left, double& right, double& num)
{
	return (num > left && num < right) ? true : false;
}

bool test::IsNumberInRange2(int& left, int& right, int& num)
{
	return (num >= left && num < right) ? true : false;
}

double test::HoursToMinutes(int& hours, int& minutes)
{
	return hours * 60 + minutes;
}

double test::DistXY(double& x, double& y)
{
	return sqrt(pow(0 - x, 2) + pow(0 - y, 2));
}

double test::Salary(double& oklad, int& days)
{
	return oklad / 30 * days;
}

double test::PhoneTalk(int& mins, double& price)
{
	return mins * price;
}

double test::Multiply(double& first, double& second, double& num)
{
	double f, s, t;
	modf(first, &f);
	s = fabs(modf(second, &t));
	return ((s + f) * num);
}

void test::ChangePointerX(int& x)
{
	if (x > 0 && x <= GetSystemMetrics(SM_CXSCREEN))
		cout << "Значение по X изменено на " << x << endl;
	else
		cout << "Неверное значение, превыщающее границы." << endl;
}

void test::ChangePointerY(int& y)
{
	if (y > 0 && y <= GetSystemMetrics(SM_CYSCREEN))
		cout << "Значение по Y изменено на " << y << endl;
	else
		cout << "Неверное значение, превыщающее границы." << endl;
}

double test::Multiply2(int& first, int& second, int& num)
{
	double f, s, t;
	modf(first, &f);
	s = fabs(modf(second, &t));
	return ((second + f) * num);
}
