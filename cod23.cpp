#include <iostream>
using namespace std;
class shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initcounter(void) { counter = 0; }
    void setPrice(void);
    void getPrice(void);
};
void shop::setPrice(void)
{
    cout << "enter id of ur item no: " << counter + 1 << endl;
    cin >> itemId[counter];
    cout << "enter price of ur item: " << endl;
    cin >> itemPrice[counter];
    counter++;
}

int main()
{
    shop dukan;
    dukan.initcounter();
    dukan.setPrice();
    dukan.setPrice();
    dukan.setPrice();
}