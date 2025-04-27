#pragma once
#include <iostream>
#include "Budget.h"
#include <vector>
using namespace std;

class Project
{
private:
    int projectID, managerId;
    string location, managerName, managerPhone, managerEmail;
    double currentCost;
    vector<Budget*> budgetList;

public:
    Project();
    ~Project();
    void setManagerData();
    void inputData();
    void addBudget();
    void getTotalBudget();
    void print();
};

