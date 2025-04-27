#include "Budget.h"

Budget::Budget()
{
}
double Budget::increaseBudget()
{
    double amount;
    cout << "Enter Increase Budget ";
    cin >> amount;
    return value += amount;
}

void Budget::set_id(int id)
{
	Id = id;
}

int Budget::get_id()
{
    return Id;
}

void Budget::set_value(double Value)
{
	value = Value;
}

double Budget::get_value()
{
	return value;
}

void Budget::input()
{
    cout << "=======================================\n";
    cout << "Enter Id Budget ";
    cin >> Id;
    cout << "Enter value Budget ";
    cin >> value;
    increaseBudget();
    cout << "=======================================\n";
}

void Budget::print()
{
	cout << "=======================================\n";
	cout << "Id Budget: " << Id << endl;
	cout << "Value Budget: " << value << endl;
	cout << "=======================================\n";
}



Budget::~Budget()
{
}
