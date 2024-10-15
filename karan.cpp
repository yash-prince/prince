#include <iostream>
using namespace std;
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
        int a[n - 2];
        for (int i = 1; i < s.length() - 1; i++)
        {
            int k = s[i] - s[i - 1];
            a[i] = k;
        }
        for (int i = 2; i < s.length(); i++)
        {
            s[i] = s[i] + a[i - 1];
            if (s[i] < 65)
            {
                int z = 'A' - s[i];
                s[i] = 91-z;
            }
            else if (s[i] > 90)
            {
                int x = s[i] - 'Z'; 
                s[i] =64+x;
            }
        }
        cout << s << endl;
    }
}