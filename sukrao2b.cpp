#include <bits/stdc++.h>
using namespace std;

bool isPerfectSquare(int num)
{
    int sqrt_num = sqrt(num);
    return sqrt_num * sqrt_num == num;
}

bool isBeautifulSquare(int n, const string &s)
{

    if (!isPerfectSquare(n))
        return false;

    int r = sqrt(n);

    for (int i = 0; i < r; ++i)
    {
        if (s[i] != '1' || s[n - r + i] != '1')
            return false;
    }

    for (int i = 1; i < r - 1; ++i)
    {
        if (s[i * r] != '1' || s[(i + 1) * r - 1] != '1')
            return false;

        for (int j = 1; j < r - 1; ++j)
        {
            if (s[i * r + j] != '0')
                return false;
        }
    }

    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        if (isBeautifulSquare(n, s))
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
    }

    return 0;
}
