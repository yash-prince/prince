#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int arr[n];
       unordered_map<int, int>freq;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            freq[arr[i]]++;
        }
        int i = 0;
        while (true)
        {
            if (freq[i] == 0)
            {
                cout<<i<<endl;
                break;
            }
            else if(freq[i] > 1){
                int  copy_i=i;
                int next_zero=copy_i+x;
                freq[next_zero] +=freq[i]-1;
                freq[i]=1;
            }
            i++;
        }
    }
}