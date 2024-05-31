#include <iostream>
using namespace std;

class binary
{
    string s;

public:
    void read(void);
    void display(void);
    void chk_bin(void);
    void ones_com(void);
};
void binary ::read(void)
{
    cout << "enter a binary number " << endl;
    cin >> s;
};
void binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "incorrect binary format" << endl;
            exit(0);
        }
    }
};
void binary ::ones_com(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        if (s.at(i) == '1')
        {
            s.at(i) = '0';
        }
    }
};
void binary ::display(void)
{
    for (int i; i < s.length(); i++)
    {
        cout << s.at(i);
    }
};
int main()
{
    // oops - classes and objects
    binary b;
    b.read();
    b.chk_bin();
    // c++ --> was call c with classes by stroustroup
    b.display();
    b.ones_com();
    b.display();
    return 0;
}