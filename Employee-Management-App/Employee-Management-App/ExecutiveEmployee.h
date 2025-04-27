#pragma once
#include <iostream>
#include "SalariedEmployee.h"
using namespace std;
class ExecutiveEmployee : public SalariedEmployee
{
public:
    ExecutiveEmployee();
    ExecutiveEmployee(double b);
    virtual ~ExecutiveEmployee();
    void getData();
    void print();
    void addBonus(double moreBonus);
    double pay();

private:
    double bonus;
};

