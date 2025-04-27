#pragma once
#include <iostream>
#include "StaffMember.h"
using namespace std;
class Employee : public StaffMember
{
public:
    Employee();
    Employee(string s);
    virtual ~Employee();
    void getData();
    void print();
    virtual double pay();

protected:
    string socialSecurityNumber;
};

