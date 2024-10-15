#include <iostream>
using namespace std;
class employee
{
    int Id;
    static int count;

public:
    void setData(void)
    {
        cout << "enter the Id number: ";
        cin >> Id;
        count++;
    }
    void getData(void)
    {
        cout << "The Id of the employee is: " << Id << ", and this is employee number: " << count << endl;
    }
    static void getcount(void)
    {
        // cout<<Id; throws an error
        cout << "the value of count is: " << count << endl;
    }
};
int employee::count = 1000;
// count is a static data member of class employee

int main()
{
    employee prince, satyam, ranjan, soumya;
    prince.setData();
    prince.getData();
    employee::getcount();

    satyam.setData();
    satyam.getData();
    employee::getcount();

    ranjan.setData();
    ranjan.getData();
    employee::getcount();

    soumya.setData();
    soumya.getData();
    employee::getcount();
    return 0;
}