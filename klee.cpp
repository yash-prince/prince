#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int n_k = k * (n - 1);
        int last_ptr = (k + n - 1);
        int sum_last = last_ptr;
        int ini_ptr = n - 2;
        int first_ele = n_k + ((ini_ptr * (ini_ptr + 1)) / 2);
        int diff = sum_last - first_ele;
        int str_diff = 0;
        if (diff < 0)
        {
            diff = (-1) * diff;
        }
        while (true)
        {
            str_diff = diff;
            sum_last += (sum_last - 1);
            first_ele -= (k + ini_ptr);
            ini_ptr--;
            diff = sum_last - first_ele;
            if (diff < 0)
            {
                diff = (-1) * diff;
            }

            if (diff > str_diff)
            {
                break;
            }
        }
        cout << str_diff << endl;
    }
}