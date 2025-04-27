#pragma once
#include <iostream>
#include "Employee.h"
using namespace std;
class CommissionEmployee : public Employee
{
public:
    CommissionEmployee();
    CommissionEmployee(double t);
    virtual ~CommissionEmployee();
    void getData();
    void print();
    double pay();

private:
    double target;
};

