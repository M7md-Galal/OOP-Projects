#pragma once
#include <iostream>
#include <string>
#include <ctime>
#include <vector>
#include "Phone.h"
#include "Email.h"
#include "Address.h"
using namespace std;

class User
{
private:
    int id;
    string firstname;
    string lastname;
    string gender;
    string city;
    time_t addedDate;
	vector<Phone> phones;
	vector<Email> emails;
	vector<Address> addresses;

public:
	User(int id, string& fn, string& ln, string& g, string& c);
	~User();
	void set_id(int newId);
	void set_firstname(string& fn);
	void set_lastname(string& ln);
	void set_gender(string& g);
	void set_city(string& c);
	int get_id();
	string get_firstname();
	string get_lastname();
	string get_gender();
	string get_city();
	User* search_user(string criteria);
	void show();
	void add_phone(Phone& ph);
	void add_email(Email& em);
	void add_address(Address& ad);
};

