#pragma once
#include <iostream>

using namespace std;

class Book 
{
private:

    struct NodeB   
    {
        int id;
        string name, author, title;
        NodeB* nextB;
    };

    

public:
    NodeB* head = NULL;
          


    void bookMenu();
    void insert();
    void search();
    void update();
    void del();
    void sort();
    void show();
    void GoBackToMainMenue();
   
};

