#include "SalariedEmployee.h"

SalariedEmployee::SalariedEmployee()
{
	salary = 0;
}

SalariedEmployee::SalariedEmployee(double s)
{
	salary = s;
}

SalariedEmployee::~SalariedEmployee()
{
}

void SalariedEmployee::getData()
{
	Employee::getData();
	cout << "Enter Salary: ";
	cin >> salary;
	cout << endl;
}

void SalariedEmployee::print()
{
	Employee::print();
	cout << "Salary: " << salary << endl;
	cout << endl;
}

double SalariedEmployee::pay()
{
	return salary;
}
