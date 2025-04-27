#pragma once
#include <iostream>
#include "Department.h"
using namespace std;

class StaffMember : public Department
{
public:
    StaffMember(int id, string n, string p, string e);
    StaffMember();
    void getData();
    string print();
    int getEmployeeId();
    virtual double pay();
    ~StaffMember();

private:
    int employeeID;
    string name, phone, email;
};

