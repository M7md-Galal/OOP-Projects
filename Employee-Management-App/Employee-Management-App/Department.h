#pragma once
#include <iostream>

using namespace std;

class Department
{
private:
	int departID;
	string departName;
public:
	Department();
	virtual ~Department();
	void departDetails();
	void printDepartDetails();
};
