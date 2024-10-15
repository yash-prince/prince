#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, s, m;
        cin >> n >> s >> m;
        vector<pair<int, int>> tasks(n);
        
        for (int i = 0; i < n; i++) {
            cin >> tasks[i].first >> tasks[i].second;
        }
        
        
        sort(tasks.begin(), tasks.end());
        
       
        if (tasks[0].first >= s) {
            cout << "yes" << endl;
            continue;
        }
        
        bool found = false;
        for (int i = 1; i < n; i++) {
            if (tasks[i].first - tasks[i - 1].second >= s) {
                found = true;
                break;
            }
        }
        
        
        if (m - tasks[n - 1].second >= s) {
            found = true;
        }
        
        if (found) {
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }
    }
    return 0;
}