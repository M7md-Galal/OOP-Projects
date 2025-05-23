#include "Book.h"
#include <iostream>
using namespace std;

void Book::insert()
{
    system("cls");

 
    cout << "\n\n\t\t\t\t++++++++(((((                           )))))++++++++";

    cout << "\n\n\t\t\t\t========((((( LIBRARY MANAGEMENT SYSTEM )))))========";

    cout << "\n\n\t\t\t\t++++++++(((((                           )))))++++++++";


    NodeB* new_NodeB = new NodeB;

    cout << "\n\n Book ID : ";
    cin >> new_NodeB->id;

    cout << "\n\n Book Name : ";
    cin >> new_NodeB->name;

    cout << "\n\n Author Name : ";
    cin >> new_NodeB->author;

    cout << "\n\n Publisher Name : ";
    cin >> new_NodeB->title;
    new_NodeB->nextB = NULL;

    if (head == NULL)
    {
        head = new_NodeB;
    }
    else
    {
        NodeB* ptr = head;
        while (ptr->nextB != NULL)
        {
            ptr = ptr->nextB;
        }
        ptr->nextB = new_NodeB;
    }

    cout << "\n\n\t\t\ New Book Inserted Successfully....";
    GoBackToMainMenue();
}

void Book::search()
{
    system("cls");

    int t_id, found = 0;

    cout << "\n\n\t\t\t\t++++++++(((((                           )))))++++++++";

    cout << "\n\n\t\t\t\t========((((( LIBRARY MANAGEMENT SYSTEM )))))========";

    cout << "\n\n\t\t\t\t++++++++(((((                           )))))++++++++";



    if (head == NULL)
    {
        cout << "\n\n The Linked List is Empty!....";
    }
    else
    {

        cout << "\n\n Book ID : ";
        cin >> t_id;
        NodeB* ptr = head;

        while (ptr != NULL)
        {
            if (t_id == ptr->id)
            {
                system("cls");


                cout << "\n\n\t\t\t\t++++++++(((((                           )))))++++++++";
                cout << "\n\n\t\t\t\t========((((( LIBRARY MANAGEMENT SYSTEM )))))========";
                cout << "\n\n\t\t\t\t++++++++(((((                           )))))++++++++";

                cout << "\n\n -> Book ID : " << ptr->id;
                cout << "\n\n -> Book Name : " << ptr->name;
                cout << "\n\n -> Author Name : " << ptr->author;
                cout << "\n\n -> Title Name : " << ptr->title;
                found++;
            }
            ptr = ptr->nextB;
            GoBackToMainMenue();

        }
        if (found == 0)
        {
     
            cout << "\n\n\t\t Book ID is Invalid....";
            GoBackToMainMenue();
        }
    }
}

void Book::update()
{
    system("cls");

    int t_id, found = 0;

    cout << "\n\n\t\t\t\t++++++++(((((                           )))))++++++++";
    cout << "\n\n\t\t\t\t========((((( LIBRARY MANAGEMENT SYSTEM )))))========";
    cout << "\n\n\t\t\t\t++++++++(((((                           )))))++++++++";


    if (head == NULL)
    {
        cout << "\n\n Linked List is Empty....";
    }
    else
    {
  
        cout << "\n\n Book ID : ";
        cin >> t_id;
        NodeB* ptr = head;

        while (ptr != NULL)
        {
            if (t_id == ptr->id)
            {
                system("cls");

                cout << "\n\n\t\t\t\t++++++++(((((                           )))))++++++++";
                cout << "\n\n\t\t\t\t========((((( LIBRARY MANAGEMENT SYSTEM )))))========";
                cout << "\n\n\t\t\t\t++++++++(((((                           )))))++++++++";


                cout << "\n\n\t Book ID : ";
                cin >> ptr->id;
                cout << "\n\n Book Name : ";
                cin >> ptr->name;
                cout << "\n\n Author Name : ";
                cin >> ptr->author;
                cout << "\n\n Title Name : ";
                cin >> ptr->title;
                found++;
                cout << "\n\n\t\t\t Book Updated Successfully!....";
            }
            ptr = ptr->nextB;
            GoBackToMainMenue();

        }
        if (found == 0)
        {
            cout << "\n\n\t\t Book ID is Invalid....";
            GoBackToMainMenue();
        }
    }
}

void Book::del()
{
    system("cls");

    int t_id, found = 0;

    cout << "\n\n\t\t\t\t++++++++(((((                           )))))++++++++";
    cout << "\n\n\t\t\t\t========((((( LIBRARY MANAGEMENT SYSTEM )))))========";
    cout << "\n\n\t\t\t\t++++++++(((((                           )))))++++++++";
  

    if (head == NULL)
    {
        cout << "\n\n The Linked List is Empty....";
    }
    else
    {
  
        cout << "\n\n Book ID : ";
        cin >> t_id;
        if (t_id == head->id)
        {
            NodeB* ptr = head;
            head = head->nextB;
            delete ptr;

            cout << "\n\n  Book Deleted Successfully....";
            found++;
            GoBackToMainMenue();
        }
        else
        {
            NodeB* pre = head;
            NodeB* ptr = head;

            while (ptr != NULL)
            {
                if (t_id == ptr->id)
                {
                    pre->nextB = ptr->nextB;
                    delete ptr;
                    cout << "\n\n Delete Book Successfully....";
                    found++;
                    break;
                }
                pre = ptr;
                ptr = ptr->nextB;
            }

        }
        if (found == 0)
        {
            cout << "\n\n Book ID is Invalid.....";
            GoBackToMainMenue();
        }
    }
}

void Book::sort()
{
    if (head == NULL)
    {
        system("cls");

        cout << "\n\n\t\t\t\t++++++++(((((                           )))))++++++++";
        cout << "\n\n\t\t\t\t========((((( LIBRARY MANAGEMENT SYSTEM )))))========";
        cout << "\n\n\t\t\t\t++++++++(((((                           )))))++++++++";

        cout << "\n\n\t\t\t\t The Linked List is Empty....";

        bookMenu();
    }
    int count = 0, t_id;
    string t_name, t_author, t_publisher;
    NodeB* ptr = head;

    while (ptr != NULL)
    {
        count++;
        ptr = ptr->nextB;
    }
    for (int i = 1; i <= count; i++)
    {
        NodeB* ptr = head;
        for (int j = 1; j < count; j++)
        {
            if (ptr->id > ptr->nextB->id)
            {
 
                t_id = ptr->id;
                t_name = ptr->name;
                t_author = ptr->author;
                t_publisher = ptr->title;

   
                ptr->id = ptr->nextB->id;
                ptr->name = ptr->nextB->name;
                ptr->author = ptr->nextB->author;
                ptr->title = ptr->nextB->title;


                ptr->nextB->id = t_id;
                ptr->nextB->name = t_name;
                ptr->nextB->author = t_author;
                ptr->nextB->title = t_publisher;
            }
            ptr = ptr->nextB;
        }

    }
}

void Book::show()
{
    system("cls");

    cout << "\n\n\t\t\t\t++++++++(((((                           )))))++++++++";
    cout << "\n\n\t\t\t\t========((((( LIBRARY MANAGEMENT SYSTEM )))))========";
    cout << "\n\n\t\t\t\t++++++++(((((                           )))))++++++++";

    NodeB* ptr = head;

    while (ptr != NULL)
    {
        cout << "\n\n -> Book ID : " << ptr->id;
        cout << "\n\n -> Book Name : " << ptr->name;
        cout << "\n\n -> Author Name : " << ptr->author;
        cout << "\n\n -> Title Name : " << ptr->title;
        cout << "\n\n =============================================";

        ptr = ptr->nextB;
    }
    GoBackToMainMenue();
}

void Book::GoBackToMainMenue()
{
    cout << "\n\nPress any key to go back to Main Menue...";
    system("pause>0");
    bookMenu();
}


void Book::bookMenu()
{
    system("cls");
    int choice;


    cout << "\n\n\t\t\t\t++++++++(((((                           )))))++++++++";

    cout << "\n\n\t\t\t\t========((((( LIBRARY MANAGEMENT SYSTEM )))))========";

    cout << "\n\n\t\t\t\t++++++++(((((                           )))))++++++++";


    cout << "\n\n\n\t\t\t\t\t\t 1. Insert New Book";
    cout << "\n\n\t\t\t\t\t\t 2. Search Book";
    cout << "\n\n\t\t\t\t\t\t 3. Update Book";
    cout << "\n\n\t\t\t\t\t\t 4. Delete Book";
    cout << "\n\n\t\t\t\t\t\t 5. Show All Books";
    cout << "\n\n\t\t\t\t\t\t 6. Exit";
    cout << "\n\n\n\t\t\t\t\t\t Enter Your Choice :";

    cin >> choice;

    switch (choice)
    {
    case 1:
        insert();
        break;

    case 2:
        search();
        break;

    case 3:
        update();
        break;

    case 4:
        del();
        break;

    case 5:
        sort();
        show();
        break;

    case 6:
        exit(0);
    default:

        cout << "\n\n Invalid Choice!....Please Try Again!.......";
    }

}
