#include <iostream>
using namespace std;
class Complex
{  
    int a, b;

public:
    Complex(void); // declaration
    void printNumber()
    {
        cout << "your number is " << a << "+" << b << "i" << endl;
    }
};
Complex ::Complex(void) // defined
{
    a = 10;
    b = 0;
};
int main()
{
    Complex c;
    c.printNumber();
    return 0;
}