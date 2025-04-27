#include "Contact.h"

Contact::Contact(){
	count = 0;
}

Contact::~Contact(){
}

void Contact::add_user(User* user)
{
	if (user) {
		users.push_back(user);
		count++;
	}
}

void Contact::edit_user(User* user)
{
	auto it = find(users.begin(), users.end(), user);
	if (it == users.end()) {
		cout << "Error: User not found in contact system\n";
		return;
	}
	// Edit ID
    int newId;
    cout << "New ID (current: " << user->get_id() << "): ";
    if (cin >> newId) {
        // Check if ID is already in use (excluding current user)
        bool idExists = false;
        for (auto* u : users) {
            if (u != user && u->get_id() == newId) {
                idExists = true;
                break;
            }
        }
        if (!idExists) {
            user->set_id(newId);
        }
        else {
            cout << "Error: ID already in use\n";
        }
    }

    // Edit First Name
    string newFname;
    cout << "New First Name (current: " << user->get_firstname() << "): ";
    getline(cin, newFname);
    if (!newFname.empty()) {
        user->set_firstname(newFname);
    }

    // Edit Last Name
    string newLname;
    cout << "New Last Name (current: " << user->get_lastname() << "): ";
    getline(cin, newLname);
    if (!newLname.empty()) {
        user->set_lastname(newLname);
    }

    // Edit Gender
    string newGender;
    cout << "New Gender (current: " << user->get_gender() << "): ";
    getline(cin, newGender);
    if (!newGender.empty()) {
        user->set_gender(newGender);
    }

    // Edit City
    string newCity;
    cout << "New City (current: " << user->get_city() << "): ";
    getline(cin, newCity);
    if (!newCity.empty()) {
        user->set_city(newCity);
    }

    cout << "User updated successfully!\n";
    cout << "Updated information:\n";
    user->show();
}

User* Contact::search_user(string& criteria)
{
    for (auto user : users) {
        if (user->get_firstname() == criteria ||
            user->get_lastname() == criteria ||
            to_string(user->get_id()) == criteria) {
            return user;
        }
    }
    return nullptr;
}

void Contact::delete_user(User& user)
{
	auto it = find(users.begin(), users.end(), &user);
	if (it == users.end()) {
		cout << "Error: User not found in contact system\n";
		return;
	}
	users.erase(it);
	count--;
	delete& user;
	cout << "User deleted successfully\n";
}

void Contact::show_all_users(){
    cout << "Contact List (Total: " << count << " users):\n";
    for (auto& user : users) {
        user->show();
        cout << "------------------------\n";
    }
}

int Contact::count_users(){
    return count;
}
