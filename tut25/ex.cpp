#include <iostream>
using namespace std;
class Employee
{
    int id;
    int salary;

public:
    void setId(void)
    {
        salary = 1220;
        cout << "enter the id of the employee" << endl;
        cin >> id;
    }
    void getId(void)
    {
        cout << "the id of this employee is " << id << endl;
    }
};
int main()
{
    // Employee harry, rohan, hasan, hasib;
    // harry.setId();
    // harry.getId();
    int size = 4;
    Employee fb[size];
    for (int i = 0; i < size; i++)
    {

        fb[0].setId();
        fb[0].getId();
    };

    return 0;
}