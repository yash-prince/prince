#include <bits/stdc++.h>
using namespace std;
bool isVowel(char ch)
{
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
}
vector<string> subsets(string str)
{
    int no_vw_sub = (1 << str.size());
    vector<string> ans;
    for (int i = 1; i < no_vw_sub; i++)
    {
        string s;
        for (int j = 0; j < str.size(); j++)
        {
            if (i & (1 << j))
            {
                s.push_back(str[j]);
            }
        }
        ans.push_back(s);
    }
    return ans;
}
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string str[n];
        for (int i = 0; i < n; i++)
        {
            cin >> str[i];
        }
        unordered_map<string, int> hsh;
        for (int i = 0; i < n; i++)
        {
            set<char> distinct_vw;
            for (char ch : str[i])
            {
                if (isVowel(ch))
                {
                    distinct_vw.insert(ch);
                }
            }
            string str_subset;
            for (char ch : distinct_vw)
            {
                str_subset.push_back(ch);
            }
            vector<string> vowel_subset = subsets(str_subset);
            for (string all_subset : vowel_subset)
            {
                hsh[all_subset]++;
            }
        }
        long long ans=0;
        for (auto  & pr : hsh)
        {
            if(pr.second >=3){
                int ct=pr.second;
                long long ways=(ct * (ct - 1) * (ct - 2)) / 6;
                ans = ans + ways;
            }
        }
        cout<<ans;
    }
}