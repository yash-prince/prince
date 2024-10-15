#include <iostream>
using namespace std;
class employee
{
    int id;
    int salary;

public:
    void setdata(void)
    {
        salary = 122;
        cout << "enter the id no oof employee: " << endl;
        cin >> id;
    }
    void getdata(void)
    {
        cout << "The id of the employee is: " << id << endl;
    }
};
int main()
{
    // employee prince ,satyam,ranjan,soumya;
    // soumya.setid();
    // soumya.getid();
    employee friends[4];
    for (int i = 0; i < 4; i++)
    {
        friends[i].setdata();
        friends[i].getdata();
    }

    return 0;
}