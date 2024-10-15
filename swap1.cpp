#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        for (int j = 2; j > 0; j = j * 2)
        {
            if (j > n)
            {
                cout << j / 2<<endl;
                break;
            }
        }
    }
    return 0;
}