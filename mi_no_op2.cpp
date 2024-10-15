#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string s, s1;
        cin >> s >> s1;

        int no_ct = 1;
        string repeated_s = s;
        while (repeated_s.length() < s1.length()) {
            repeated_s += s;
            no_ct++;
        }

        // Check if s1 is a substring of the current repeated_s
        if (repeated_s.find(s1) != string::npos) {
            cout << no_ct << endl;
        } else {
            // Try adding one more repetition if necessary
            repeated_s += s;
            if (repeated_s.find(s1) != string::npos) {
                cout << ++no_ct << endl;
            } else {
                cout << -1 << endl;
            }
        }
    }
}