#pragma once
#include <iostream>
#include "Employee.h"
class SalariedEmployee : public Employee
{
public:
    SalariedEmployee();
    SalariedEmployee(double s);
    virtual ~SalariedEmployee();
    void getData();
    void print();
    virtual double pay();

protected:
    double salary;
};

