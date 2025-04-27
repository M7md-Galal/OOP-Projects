#pragma once
#include <iostream>
#include <string>
using namespace std;

class Email
{
private:
	string email;
	string type;
	string description;
public:
	Email(string& em, string& ty, string& desc);
	void set_email(string& em);
	void set_type(string& ty);
	void set_description(string& desc);
	string get_email();
	string get_type();
	string get_description();
};

