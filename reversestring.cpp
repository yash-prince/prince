#include <iostream>
using namespace std;
int main()
{
    string s;
    cout << "enter ur word: ";
    cin >> s;
    cout << "word ater reverse is: ";
    for (int i = 0; i < s.length(); i++)
    {
        int a;
        a = s.length() - i - 1;
        cout << s[a];
    }

    return 0;
}