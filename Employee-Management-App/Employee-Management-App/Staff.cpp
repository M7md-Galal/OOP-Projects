#include "Staff.h"
#include <iostream>
using namespace std;
Staff::Staff()
{

}

Staff::~Staff()
{
    for (auto member : staffList) {
        delete member;
    }
}

void Staff::addMember(StaffMember* member)
{
    if (member) {
        staffList.push_back(member);
    }
}

void Staff::delMember(StaffMember* member)
{
    for (auto it = staffList.begin(); it != staffList.end(); ++it) {
        if (*it == member) {
            delete* it;  // Free memory
            staffList.erase(it);
            break;
        }
    }
}

void Staff::showAll()
{
    for (const auto member : staffList) {
        cout << member->print() << endl;
    }
}
