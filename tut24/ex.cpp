#include <iostream>
using namespace std;
class Employee
{
    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "enter the id of employee no:" << count << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "the id of this employee is: " << id << endl;
    }

    // static function

    static void getStaticData(void)
    {
        cout << "current value of member is " << count << ".\n"
             << endl;
    }
};
int Employee ::count; // default value 0
// int Employee ::count = 1000; // starts from 1000mn
int main()
{
    Employee harry, rohan, lovish;
    harry.setData();
    harry.getData();
    Employee::getStaticData();

    rohan.setData();
    rohan.getData();
    Employee::getStaticData();

    lovish.setData();
    lovish.getData();
    Employee::getStaticData();

    return 0;
}
