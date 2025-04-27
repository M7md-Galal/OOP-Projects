#include "User.h"

User::User(int newId, string& fn, string& ln, string& g, string& c)
{
	id = newId;
	firstname = fn;
	lastname = ln;
	gender = g;
	city = c;
	addedDate = time(nullptr);
}

User::~User()
{
}

void User::set_id(int newId)
{
	id = newId;
}

void User::set_firstname(string& fn)
{
	firstname = fn;
}

void User::set_lastname(string& ln)
{
	lastname = ln;
}

void User::set_gender(string& g)
{
	gender = g;
}

void User::set_city(string& c)
{
	city = c;
}

int User::get_id()
{
	return id;
}

string User::get_firstname()
{
	return firstname;
}

string User::get_lastname()
{
	return lastname;
}

string User::get_gender()
{
	return gender;
}

string User::get_city()
{
	return city;
}

User* User::search_user(string criteria)
{
	if (criteria == firstname || criteria == lastname || criteria == to_string(id)){
		return this;
	}
	return nullptr;
}

void User::show()
{
	cout << "ID: " << id << "\n"
		<< "Name: " << firstname << " " << lastname << "\n"
		<< "Gender: " << gender << "\n"
		<< "City: " << city << "\n"
		<< "Phones:\n";
	for (auto& phone : phones) {
		cout << "  - " << phone.get_phone() << " (" << phone.get_type() << ")\n";
	}
	cout << "Emails:\n";
	for (auto& email : emails) {
		std::cout << "  - " << email.get_email() << " (" << email.get_type() << ")\n";
	}
	cout << "Addresses:\n";
	for (auto& address : addresses) {
		cout << "  - " << address.get_place() << " (" << address.get_type() << ")\n";
	}
}

void User::add_phone(Phone& ph)
{
	phones.push_back(ph);
}

void User::add_email(Email& em)
{
	emails.push_back(em);
}

void User::add_address(Address& ad)
{
	addresses.push_back(ad);
}
