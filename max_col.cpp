#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int max_no = arr[0];
        int last_index = 0;
        pair<int, int> pii = {max_no, last_index};
        for (int i = 1; i < n; i++)
        {
            if (arr[i] > max_no)
            {
                max_no = arr[i];
                last_index = i;
                pii = {max_no, last_index};
            }
            else if (arr[i] == max_no && i % 2==0)
            {
                last_index = i;
                pii.second = last_index;
            }
        }
        if (n % 2 == 0)
        {
            cout << max_no + (n / 2) << endl;
        }
        else if (n % 2 != 0 && (pii.second + 1) % 2 != 0 )
        {
            cout << max_no + ((n / 2) + 1) << endl;
        }
        else if (n % 2 != 0 && (pii.second + 1) % 2 == 0)
        {
            cout << max_no + (n / 2) << endl;
        }
    }
}