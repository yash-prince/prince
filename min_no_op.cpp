#include <bits/stdc++.h>
using namespace std;
vector<vector<char>> v;
void give_sub_str(string s, int n, vector<char> v1)
{
    if (n == s.length())
    {
        v.push_back(v1);
        return;
    }
    v1.push_back(s[n]);
    give_sub_str(s, n + 1, v1);
    v1.pop_back();
    give_sub_str(s, n + 1, v1);
}
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
        bool found = false;
        int ct = 0;
        int no_ct = 0;
        vector<char> v1;
        string s2 = s;

        while (true)
        {
            if ((s2 == s1) && no_ct == 0)
            {
                ct = s1.length();
                break;
            }
            if (s2.length() <= s1.length())
            {
                s2 += s2;
                 no_ct++;
            }
            
            give_sub_str(s2, 0, v1);
            v1.clear();
            for (int i = 0; i < v.size(); i++)
            {

                for (int j = 0; j < v[i].size(); j++)
                {
                    if (s1[j] != v[i][j])
                    {
                        break;
                    }
                    else
                    {
                        ct++;
                    }
                }
                if (ct == s1.length())
                {
                    found = true;
                    break;
                }
                ct = 0;
            }
            // for (int i = 0; i < v.size(); i++)
            // {
            //     for (int j = 0; j < v[i].size(); j++)
            //     {
            //         cout << v[i][j];
            //     }
            //     cout << endl;
            // }
            v.clear();

            if (found)
            {
                break;
            }
            if (found == false && s2.length() >= (2 * s1.length()))
            {
                break;
            }
        }
        if(ct == s1.length()){
            cout<<no_ct<<endl;
        }else{
            cout<<-1<<endl;
        }
    }
}