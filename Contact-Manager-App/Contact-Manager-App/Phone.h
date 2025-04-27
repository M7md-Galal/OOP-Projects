#pragma once
#include <iostream>
#include <string>
using namespace std;

class Phone
{
private:
	string phone;
	string type;
	string description;
public:
	Phone(string& ph,string& ty,string& desc);
	void set_phone(string& ph);
	void set_type(string& ty);
	void set_description(string& desc);
	string get_phone();
	string get_type();
	string get_description();
};

