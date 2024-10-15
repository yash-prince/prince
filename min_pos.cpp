#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t; // Read number of test cases
    while (t--) {
        int n,x;
        cin>>n>>x;
        int arr[n];
        map<int,int>m;
        int find_max=0;
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
            m[arr[i]]++;
            find_max=max(find_max,arr[i]);

        }
        for (int i = 0; i < find_max; i++)
        {
            // if(m[i] == )
        }
        
        
    }
    return 0;
}
