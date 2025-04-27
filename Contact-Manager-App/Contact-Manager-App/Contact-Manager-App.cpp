
#include <string>
#include <vector>
#include "User.h"
#include "Phone.h"
#include "Email.h"
#include "Address.h"
#include "Contact.h"
using namespace std;

Contact contactSystem;
void add_user()
{
	string fname, lname, gender, city, phone, email, address;
	int id;

	cout << "Enter User ID: ";
	cin >> id;
	cin.ignore(); // To ignore the newline character left in the buffer

	cout << "Enter First Name: ";
	getline(cin, fname);

	cout << "Enter Last Name: ";
	getline(cin, lname);

	cout << "Enter Gender: ";
	getline(cin, gender);

	cout << "Enter City: ";
	getline(cin, city);

	cout << "Enter Phone: ";
	getline(cin, phone);

	cout << "Enter Email: ";
	getline(cin, email);

	cout << "Enter Address: ";
	getline(cin, address);
	User* newUser = new User(id, fname, lname, gender, city);

	//Phone phoneObj(phone, phone, phone); // Create a Phone object from the string
	//newUser->add_phone(phoneObj); // Pass the Phone object

	//Email emailObj(email, email, email); // Create an Email object from the string
	//newUser->add_email(emailObj); // Pass the Email object

	//Address addressObj(address, address, address); // Create an Address object from the string
	//newUser->add_address(addressObj); // Pass the Address object

	cout << "User Added\n";
}

void edit_user()
{
	std::string criteria;
	std::cout << "Enter user ID, first name, or last name to edit: ";
	std::getline(cin, criteria);

	User* user = contactSystem.search_user(criteria);
	if (user) {
		string newFname, newLname, newGender, newCity;
		cout << "Enter new First Name (current: " << user->get_firstname() << "): ";
		getline(cin, newFname);
		if (!newFname.empty()) user->set_firstname(newFname);

		cout << "Enter new Last Name (current: " << user->get_lastname() << "): ";
		getline(cin, newLname);
		if (!newLname.empty()) user->set_lastname(newLname);

		cout << "Enter new Gender (current: " << user->get_gender() << "): ";
		getline(cin, newGender);
		if (!newGender.empty()) user->set_gender(newGender);

		cout << "Enter new City (current: " << user->get_city() << "): ";
		getline(cin, newCity);
		if (!newCity.empty()) user->set_city(newCity);

		contactSystem.edit_user(user);
		cout << "User updated successfully!\n";
	}
	else {
		cout << "User not found!\n";
	}
}

void search_user()
{
	string criteria;
	cout << "Enter user ID, first name, or last name to search: ";
	getline(cin, criteria);

	User* user = contactSystem.search_user(criteria);
	if (user) {
		user->show();
	}
	else {
		cout << "User not found!\n";
	}
}

void delete_user()
{
	string criteria;
	cout << "Enter user ID, first name, or last name to delete: ";
	getline(cin, criteria);

	User* user = contactSystem.search_user(criteria);
	if (user) {
        contactSystem.delete_user(*user);
		cout << "User deleted successfully!\n";
	}
	else {
		cout << "User not found!\n";
	}
}

void show()
{
	contactSystem.show_all_users();
}

int main()
{
	bool running = true;
	while (running) {
		int choice = -1;
		cout << "\nContact Management System\n";
		cout << "\t1. Add User\n";
		cout << "\t2. Edit User\n";
		cout << "\t3. Search User\n";
		cout << "\t4. Delete User\n";
		cout << "\t5. Show All Users\n";
		cout << "\t6. Exit\n\n";
		cout << "Enter your choice (1-6): ";
		cin >> choice;
		cin.ignore(); // To ignore the newline character left in the buffer
		switch (choice)
		{
		case 1:
			add_user();

			break;
		case 2:
			edit_user();
			break;
		case 3:
			search_user();
			break;
		case 4:
			delete_user();
			break;
		case 5:
			show();
			break;
		case 6:
			cout << "Exit\n";

			break;
		default:
			cout << "Invalid choice\n";
			break;
		}
	}
	return 0;
}
