#include <iostream>
using namespace std;
int main()
{

    for (int i = 9; i <= 0; i - 3)
    {
        int c = 0;
        for (int j = i; j <= 1; j / 3)
        {
            cout << " ";
        }
        cout << i;
        c++;
        for (int k = 1; k < c; k++)
        {
            ++i;
            cout << i;
        }
        cout << endl;
    }
    return 0;
}