#pragma once
#include <iostream>
#include "StaffMember.h"
#include "StaffMember.h"
#include <vector>
using namespace std;

class Staff
{

public:
	Staff();
	~Staff();
	void addMember(StaffMember* member);
	void delMember(StaffMember* member);
	void showAll();
	vector<StaffMember*> staffList;

	

};

