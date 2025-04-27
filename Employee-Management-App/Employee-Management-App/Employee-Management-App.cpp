#include <iostream>
#include "Department.h"
#include "Staff.h"
#include "Project.h"
#include "Budget.h"
using namespace std;

void Handel_Deptartment() {
    int c = -1;
    Department dept;
    while (c != 0) {
        cout << "Handel Department\n" << endl;
        cout << "\t1. Add Department\n";
        cout << "\t2. View Department\n";
        cout << "\t0. Exit\n\n";
        cout << "Enter your choice: ";
        cin >> c;
        switch (c) {
        case 1:
            cout << "Add Department" << endl;
            dept.departDetails();
            break;
        case 2:
            cout << "View Department" << endl;
            dept.printDepartDetails();
            break;
        case 0:
            cout << "Exiting Department Management" << endl;
            return;
        default:
            cout << "Invalid Input" << endl;
        }
    }
}

void Handel_Staff() {
    int c = -1;
    Staff staff;
    while (c != 0) {
        cout << "Handel Staff\n" << endl;
        cout << "\t1. Add Staff\n";
        cout << "\t2. Delete Staff\n";
        cout << "\t3. View Staff\n";
        cout << "\t0. Exit\n\n";
        cout << "Enter your choice: ";
        cin >> c;
        StaffMember* member = nullptr;
        switch (c) {
        case 1:
            cout << "Add Staff" << endl;
            member = new StaffMember();
            member->getData();
            staff.addMember(member);
            break;
        case 2:
            cout << "Delete Staff" << endl;
            int staff_id;
            cout << "Enter Staff ID: ";
            cin >> staff_id;
            // Find the member by ID and delete
            for (auto m : staff.staffList) {
                if (m->getEmployeeId() == staff_id) {
                    staff.delMember(m);
                    break;
                }
            }
            break;
        case 3:
            cout << "View Staff" << endl;
            staff.showAll();
            break;
        case 0:
            cout << "Exiting Staff Management" << endl;
            return;
        default:
            cout << "Invalid Input" << endl;
        }
    }
}

void Handel_Project() {
    int c = -1;
    Project project;
    while (c != 0) {
        cout << "Handel Project\n" << endl;
        cout << "\t1. Add Project\n";
        cout << "\t2. View Project\n";
        cout << "\t3. Add Budget\n";
        cout << "\t4. Increase Budget\n";
        cout << "\t0. Exit\n\n";
        cout << "Enter your choice: ";
        cin >> c;
        switch (c) {
        case 1:
            cout << "Add Project" << endl;
            project.inputData();
            break;
        case 2:
            cout << "View Project" << endl;
            project.print();
            break;
        case 3:
            cout << "Add Budget" << endl;
            project.addBudget();
            break;
        case 4:
            cout << "Increase Budget" << endl;
            int amount;
            cout << "Enter amount to increase: ";
            cin >> amount;
            break;
        case 0:
            cout << "Exiting Project Management" << endl;
            return;
        default:
            cout << "Invalid Input" << endl;
        }
    }
}

int main()
{
    int c = -1;
    while (c != 0) {
        cout << "Department Management System\n" << endl;
        cout << "\t1. Department" << endl;
        cout << "\t2. Staff" << endl;
        cout << "\t3. Project\n" << endl;
        cout << "Enter your choice: ";
        cin >> c;
        switch (c) {
        case 1:
            Handel_Deptartment();
            break;
        case 2:
            Handel_Staff();
            break;
        case 3:
            Handel_Project();
            break;
        case 0:
            cout << "Exiting System" << endl;
            return 0;
        default:
            cout << "Invalid Input" << endl;
        }
    }
}
