#include <iostream>
using namespace std;

int main()
{

    // even or odd
    int number1;
    cout << "Enter your number 1: ";
    cin >> number1;

    if (number1 % 2 == 0)
    {
        cout << "Number is even\n\n"
             << endl;
    }
    else
    {
        cout << "Number is odd\n\n"
             << endl;
    }

    // positive or negative

    cout << "checking for positive / negative / zero \n";

    if (number1 > 0)
    {
        cout << "RESULT: Number is positive" << endl;
    }
    else if (number1 < 0)
    {
        cout << "RESULT: Number is negative" << endl;
    }
    else
    {
        cout << "RESULT: Number is zero" << endl;
    }

    int sum, num1, num2;
    // addition
    cout << "\nenters numbers to sum: ";
    cin >> num1;
    cin >> num2;
    sum = (num1 + num2);
    cout << sum << endl;

    // subs
    cout << "enters numbers to subs: ";
    cin >> num1;
    cin >> num2;
    sum = (num1 - num2);
    cout << sum << endl;

    // multiplication
    cout << "enters numbers to multiplication: ";
    cin >> num1;
    cin >> num2;
    sum = (num1 * num2);
    cout << sum << endl;

    // division
    cout << "enters numbers to division: ";
    cin >> num1;
    cin >> num2;
    sum = (num1 / num2);
    cout << sum << endl;
}
