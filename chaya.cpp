#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int z = 2;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int a[n];
        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
        }
        for (int x = 0; x < n - 1; x++)
        {
            for (int b = 1; b > 0; b++)
            {
                if (a[x] >= a[x + 1])
                {
                    a[x + 1] = a[x + 1] * z;
                    if (a[x] >= a[x + 1])
                    {
                        a[x + 1] = a[x + 1] / z;
                        z++;
                    }
                    else
                    {
                        break;
                    }
                }
                else if (a[x] < a[x + 1])
                {
                    break;
                }
            }
            z = 2;
        }
        cout << a[n - 1] << endl;
    }
}