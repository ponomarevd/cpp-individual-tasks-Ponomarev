#include "test.h"
#include <math.h>
#include <iostream>

double test::PowDI(double &a, int &b)
{
	return pow(a, b);
}

double test::PowDD(double &a, double &b)
{
	return pow(a, b);
}

double test::DoubleInt(unsigned int &a, unsigned int &b)
{
	return b == 0 ? throw std::overflow_error("Divide by zero exception") :  a / b;
}

int test::MoneyCounter(unsigned int& nominal, unsigned int& count)
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

double test::ProductÑalories(int& calories, double& mass)
{
	return calories * 100 / mass;
}

bool test::IsNumberInRange(double& left, double& right, double& num)
{
	return (num > left && num < right) ? true : false;
}
