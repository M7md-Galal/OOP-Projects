#include "Project.h"

Project::Project()
{
    projectID = 0;
    location = "UNKNOWN";
    currentCost = 0;
}

Project::~Project()
{
    for (auto budget : budgetList) {
        delete budget;
    }
}

void Project::setManagerData()
{
    cout << "Inter manager id : ";
    cin >> managerId;
    cout << endl;
    cout << "Inter manager name : ";
    cin >> managerName;
    cout << endl;
    cout << "Inter manager phone : ";
    cin >> managerPhone;
    cout << endl;
    cout << "Inter manager email : ";
    cin >> managerEmail;
    cout << endl;
}

void Project::inputData()
{
    setManagerData();
    cout << "Inter project id : ";
    cin >> projectID;
    cout << endl;
    cout << "Inter location : ";
    cin >> location;
    cout << endl;
    cout << "Inter current cost : ";
    cin >> currentCost;
    cout << endl;
    int n = 0;
    cout << "How many Budgets ?" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int id;
        double value;
        cout << "Budget id : ";
        cin >> id;
        cout << endl;
        cout << "Budget value : ";
        cin >> value;
        cout << endl;
    }
}

void Project::addBudget()
{
	Budget* budget = new Budget();
	budget->input();
	budgetList.push_back(budget);
}

void Project::getTotalBudget()
{
	double total = 0;
	for (auto budget : budgetList) {
        total += budget->get_value();
	}
	cout << "Total Budget: " << total << endl;
}

void Project::print()
{
	cout << "Project ID: " << projectID << endl;
	cout << "Location: " << location << endl;
	cout << "Manager ID: " << managerId << endl;
	cout << "Manager Name: " << managerName << endl;
	cout << "Manager Phone: " << managerPhone << endl;
	cout << "Manager Email: " << managerEmail << endl;
	cout << "Current Cost: " << currentCost << endl;
	cout << "Budgets: " << endl;
	for (auto budget : budgetList) {
		budget->print();
	}
	cout << endl;
}
