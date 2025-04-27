#include "HourlyEmployee.h"

HourlyEmployee::HourlyEmployee()
{
	hoursWorked = 0;
	rate = 0;
}

HourlyEmployee::HourlyEmployee(double h, double r)
{
	hoursWorked = h;
	rate = r;
}

HourlyEmployee::~HourlyEmployee()
{
}

void HourlyEmployee::getData()
{
	Employee::getData();
	cout << "Enter hours worked : ";
	cin >> hoursWorked;
	cout << endl;
	cout << "Enter rate : ";
	cin >> rate;
	cout << endl;
}

void HourlyEmployee::print()
{
	Employee::print();
	cout << "Hours Worked : " << hoursWorked << endl;
	cout << "Rate : " << rate << endl;
	cout << endl;
}

void HourlyEmployee::addHours(int moreHours)
{
	hoursWorked += moreHours;
}

double HourlyEmployee::pay()
{
	return rate * hoursWorked;
}
