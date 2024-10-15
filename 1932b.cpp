#include <bits/stdc++.h>
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
        int arr[n];
        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
            if (j == 0)
            {
                arr[0] = a[0];
            }
            else if (j >= 1)
            {
                if (arr[j - 1] >=a[j])
                {
                    for (int b = 1; b > 0; b++)
                    {
                        arr[j] = a[j] * z;
                        if (arr[j] <= arr[j - 1])
                        {
                            arr[j] = arr[j] / z;
                            z++;
                        }
                        else
                        {
                            break;
                        }
                    }
                    z = 2;
                }
                else if (arr[j - 1] < a[j])
                {
                    arr[j] = a[j];
                }
            }
        }
        cout << arr[n - 1] << endl;
    }
}