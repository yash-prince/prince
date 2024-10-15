#include <iostream>
using namespace std;
class employee
{
    string name;
    int atmNum;
    int atmPin;
    int a, b;

public:
    void setdata();
    void transactionData();
    void getdata();
};
void employee::setdata()
{
    cout << "enter the account holder name: ";
    cin >> name;
    cout << "enter your atm number: ";
    cin >> atmNum;
    cout << "enter the atm pin: ";
    cin >> atmPin;
    cout << "enter the credited amount: ";
    cin >> a;
}
void employee::transactionData()
{
    cout << "withdrawl amount: ";
    cin >> b;
}
void employee::getdata()
{
    cout << "account holder name " << name << endl;
    cout << "atm number " << atmNum << endl;
    cout << " atm pin " << atmPin << endl;
    cout << "credited amount " << a << "rs" << endl;
    cout << "your account is credited with" << a << "rs" << endl;
    cout << "your account is debited with " << b << "rs" << endl;
    cout << "remaining balance" << a - b << "rs" << endl;
}
int main()
{
    employee name;
    name.setdata();
    name.transactionData();
    name.getdata();
};