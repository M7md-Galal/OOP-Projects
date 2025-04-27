#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "User.h"
using namespace std;

class Contact
{
private:
	int count;
	vector<User*> users;
public:
	Contact();
	~Contact();
	void add_user(User* user);
	void edit_user(User* user);
	User* search_user(string& criteria);
	void delete_user(User& user);
	void show_all_users();
	int count_users();
};

