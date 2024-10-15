#include <iostream>
using namespace std;
int main()
{
    string s;
    cout << "enter the string ";
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != s[i + 1])
        {
         cout << s[i];
        }
        else if (s[i] == s[i + 1])
        {
            int a = i + 2;
            cout << s[a];
            i = a--;
        }
    }
    return 0;
}