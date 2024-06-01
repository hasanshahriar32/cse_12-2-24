#include <iostream>
using namespace std;
class Shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter(void) { counter = 0; }
    void displayPrice(void);
    void setPrice(void);
};
void Shop::setPrice(void)
{
    cout << "enter id of your item (no_" << counter + 1 << "): ";
    cin >> itemId[counter];
    cout << itemId[counter] << endl;
    cout << "enter price of your item: ";
    cin >> itemPrice[counter];
    cout << itemPrice[counter] << endl
         << '\n';
    counter++;
};
void Shop ::displayPrice(void)
{
    cout << "-----result-----" << endl;
    for (int i = 0; i < counter; i++)
    {
        cout << "the price with the item with id (" << itemId[i] << ") is: " << itemPrice[i] << endl;
    }
};
int main()
{
    Shop sp;
    sp.initCounter();
    sp.setPrice();
    sp.setPrice();
    sp.displayPrice();
    return 0;
}