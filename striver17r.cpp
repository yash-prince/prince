#include <bits/stdc++.h>
using namespace std;
bool palindrome(vector<char> &v, vector<char> &v1, string &s, int a, int b, int c, int d, int e)
{
    if (a > b && v.size() >= 1 && v1.size() >= 1)
    {
        if (c >= s.length() - 1)
        {
            if (d > 0)
            {
                return true;
            }
            else if (d == 0)
            {
                cout << "palindrome not found";
                return true;
            }
        }

        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i];
        }
        for (int i = v1.size() - 1; i >= 0; i--)
        {
            cout << v1[i];
        }
        cout << endl;
        d++;
        e = 0;
        if (a >= b)
        {
            b = s.length() - 1;
            c = c + 1;
            a = c;
            if (palindrome(v, v1, s, a, b, c, d, e))
            {
                return true;
            }
        }
    }

    if (a <= b)
    {

        if (s[a] == s[b])
        {
            v.push_back(s[a]);
            e++;
            if (a != b)
            {
                v1.push_back(s[b]);
            }
            if (palindrome(v, v1, s, a + 1, b - 1, c, d, e))
            {
                return true;
            }
        }
        else if (s[a] != s[b])
        {
            v.clear();
            v1.clear();
            if (e > 0)
            {

                if (palindrome(v, v1, s, c, b + (e - 1), c, d, 0))
                {
                    return true;
                }
            }
            else if (e == 0)
            {
                if (palindrome(v, v1, s, c, b - 1, c, d, e))
                {
                    return true;
                }
            }
        }
    }
}
int main()
{
    string s;
    cin >> s;
    vector<char> v;
    vector<char> v1;
    int a;
    int b;
    palindrome(v, v1, s, 0, s.length() - 1, 0, 0, 0);
}