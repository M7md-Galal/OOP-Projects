#include "Employee.h"

Employee::Employee()
{
}

Employee::Employee(string s)
{
	socialSecurityNumber = s;
}

Employee::~Employee()
{
}

void Employee::getData()
{
	StaffMember::getData();
	cout << "Enter Social Security Number: ";
	cin >> socialSecurityNumber;
	cout << endl;
}

void Employee::print()
{
	StaffMember::print();
	cout << "Social Security Number: " << socialSecurityNumber << endl;
	cout << endl;
}

double Employee::pay()
{
	return 0.0;
}
