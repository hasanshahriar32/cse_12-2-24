#include <iostream>
using namespace std;

int main()
{
    int sid;
    string name;
    string dept;

    cout << "Enter your student id: ";
    cin >> sid;

    cout << "Enter your department: ";
    cin >> dept;

    cin.ignore();

    cout << "Enter your full name: ";
    getline(cin, name);

    cout << "Your student id is: " << sid << endl;
    cout << "Your department is: " << dept << endl;
    cout << "Your full name is: " << name << endl;

    return 0;
}
