#include "StaffMember.h"
#include <iostream>
#include <string>
using namespace std;

StaffMember::StaffMember(int id, string n, string p, string e)
{
	employeeID = id;
	name = n;
	phone = p;
	email = e;
}

StaffMember::StaffMember()
{
	employeeID = 0;
	name = "";
	phone = "";
	email = "";
}

void StaffMember::getData()
{
	cout << "Enter member id : ";
	cin >> employeeID;
	cout << endl;
	cout << "Enter member name : ";
	cin >> name;
	cout << endl;
	cout << "Enter member phone : ";
	cin >> phone;
	cout << endl;
	cout << "Enter member email : ";
	cin >> email;
	cout << endl;
}

string StaffMember::print() {
	return "ID: " + to_string(employeeID) + ", Name: " + name + ", Phone: " + phone + ", Email: " + email;
}

int StaffMember::getEmployeeId()
{
	return employeeID;
}

double StaffMember::pay()
{
	return 0.0;
}

StaffMember::~StaffMember()
{
}
