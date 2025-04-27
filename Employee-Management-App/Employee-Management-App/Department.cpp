#include "Department.h"

Department::Department()
{
	departID = 0;
	departName = "";
}

Department::~Department()
{

}

void Department::departDetails()
{
	cout << "Enter Department ID: ";
	cin >> departID;
	cout << "Enter Department Name: ";
	cin >> departName;
}

void Department::printDepartDetails()
{
	cout << "Department ID: " << departID << endl;
	cout << "Department Name: " << departName << endl;
}



