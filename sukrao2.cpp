#include <bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h>
using namespace std;
bool find_sqrt(int num) {
    if (num < 0) return false;  // Negative numbers cannot be perfect squares
    int sqrt_num = static_cast<int>(sqrt(num));  // Get the integer part of the square root
    return sqrt_num * sqrt_num == num;  // Check if squaring the integer part gives back the original number
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        if (find_sqrt(n) != 1)
        {
            cout << "No" << endl;
            
        }
        else
        {
            bool check = true;
            for (int i = 0; i < sqrt(n); i++)
            {
                if (s[i] != '1')
                {
                    cout << "No" << endl;
                    check = false;
                    break;
                }
            }
            int l = (n - sqrt(n));
            if (check)
            {
                for (int i = l; i < n; i++)
                {
                    if (s[i] != '1')
                    {
                        cout << "No" << endl;
                        check = false;
                        break;
                    }
                }
            }
            if (check)
            {
                for (int i = int(sqrt(n)); i < n - sqrt(n); i = i + int(sqrt(n)))
                {
                    if (s[i] != '1')
                    {
                        cout << "No" << endl;
                        check = false;
                        break;
                    }
                }
            }
            if (check)
            {
                for (int i = int(sqrt(n)) + 1; i < ((n -(sqrt(n))) - 1); i++)
                {
                    int sqrt_no = sqrt(n);
                    if (i % sqrt_no == 4 || i % sqrt_no == 0)
                    {
                        continue;
                    }
                    if (s[i] != '0')
                    {
                        cout << "No" << endl;
                        check = false;
                        break;
                    }
                }
            }

            if (check)
            {
                cout << "Yes" << endl;
            }
        }
    }
}