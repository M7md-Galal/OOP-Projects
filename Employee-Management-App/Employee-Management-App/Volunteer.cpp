#include "Volunteer.h"

Volunteer::Volunteer()
{
	amount = 0;
}

Volunteer::~Volunteer()
{
}

void Volunteer::setAmount()
{
	StaffMember::getData();
	cout << "Enter amount: ";
	cin >> amount;
	cout << endl;
}

void Volunteer::print()
{
	StaffMember::print();
	cout << "Amount: " << amount << endl;
	cout << endl;
}

double Volunteer::pay()
{
	return amount;
}
