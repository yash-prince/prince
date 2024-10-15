#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int t;
    t = (s.length() - 1) / 2;
    vector<char> put_char;
    vector<vector<char>> str;
    for (int i = t; i < s.length(); i++)
    {
        put_char.push_back(s[i]);
    }

    str.push_back(put_char);
    for (int i = (t - 1); i >= 1; i--)
    {
        put_char.insert(put_char.begin(), s[i]);
        str.push_back(put_char);
    }
    int ct = -1;
    int f;
    for (int i = 0; i < str.size(); i++)
    {
        ct = -1;
        f = i;
        for (int j = 0; j < str[i].size(); j++)
        {
            if (s[j] != str[i][j])
            {
                ct = 0;
                break;
            }
        }
        if (ct == -1)
        {
            break;
        }
    }
    if (ct == -1 && s.size() > 2)
    {
        cout << "YES" << endl;
        for (int i = 0; i < str[f].size(); i++)
        {
            cout << str[f][i];
        }
        cout << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}