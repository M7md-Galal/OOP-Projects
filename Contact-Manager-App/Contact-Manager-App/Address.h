#pragma once
#include <iostream>
#include <string>
using namespace std;

class Address
{
private:
	string place;
	string type;
	string description;
public:
	Address(string& pl, string& ty, string& desc);
	void set_place(string& pl);
	void set_type(string& ty);
	void set_description(string& desc);
	string get_place();
	string get_type();
	string get_description();
};

