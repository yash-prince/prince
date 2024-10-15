#include <iostream>
using namespace std;
int main()
{ int count =0;
    string s;
    cout << "enter your string: ";
    cin >> s;
    if (s.length() % 2 == 0)
    {
        for (int i = 0; i < (s.length() + 1) / 2; i++)
        {

            if (s[i] != s[s.length() - i - 1])
            {
                cout << "strings rotation are not equal";

                break;
            }
            count++;
           
        }
        if (count==(s.length() + 1) / 2)
        {
            cout<<"same";
        }
        
    }
    else if (s.length() % 2 != 0)
    {
        for (int i = 0; i < (s.length() / 2) + 1; i++)
        {
            if (s[i] != s[s.length() - i - 1])
            {
                cout << "strings rotation are not equal";
                break;
            }
            count++;
        }
        if (count==(s.length() / 2) + 1)
        {
            cout<<"same";
        }
        
    }

    return 0;
}