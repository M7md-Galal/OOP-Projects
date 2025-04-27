#pragma once
#include <iostream>
#include "StaffMember.h"
using namespace std;
class Volunteer : public StaffMember
{
public:
    Volunteer();
    virtual ~Volunteer();
    void setAmount();
    void print();
    double pay();


private:
    double amount;
};

