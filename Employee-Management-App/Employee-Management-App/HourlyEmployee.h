#pragma once
#include <iostream>
#include "Employee.h"
using namespace std;

class HourlyEmployee : public Employee
{
public:
    HourlyEmployee();
    HourlyEmployee(double h, double r);
    virtual ~HourlyEmployee();
    void getData();
    void print();
    void addHours(int moreHours);
    double pay();

private:
    double hoursWorked, rate;
};

