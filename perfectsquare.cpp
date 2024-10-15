#include <iostream>
using namespace std;
int main()
{
    int a;
    int m;

    cout << "enter the number: ";
    cin >> a;
    for (int i = 1; i < a; i++)
    {
        m = i * i;
        if (m == a)
        {
            cout << "yes number is perfect square " << endl;
            break;
        }
        else if(m != a)
        {
            cout<<"This number is not a perfect square "<<endl;
            break;  
        }
    }

    return 0;
}