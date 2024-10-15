#include<bits/stdc++.h>
using namespace std;

int find_gcd(int a, int b) {
    return __gcd(a, b);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        vector<int> b(n - 1);
        for (int i = 0; i < n - 1; i++) {
            b[i] = find_gcd(a[i], a[i+1]);
        }
        
        bool already_sorted = true;
        for (int i = 0; i < n - 2; i++) {
            if (b[i] > b[i+1]) {
                already_sorted = false;
                break;
            }
        }
        
        if (already_sorted) {
            cout << "YES\n";
            continue;
        }
        
        bool possible = false;
        
        for (int i = 0; i < n; i++) {
            vector<int> temp;
            
            for (int j = 0; j < n; j++) {
                if (i != j) {
                    temp.push_back(a[j]);
                }
            }
            
            vector<int> new_b(temp.size() - 1);
            for (int j = 0; j < temp.size() - 1; j++) {
                new_b[j] = find_gcd(temp[j], temp[j+1]);
            }
            
            bool sorted = true;
            for (int j = 0; j < new_b.size() - 1; j++) {
                if (new_b[j] > new_b[j+1]) {
                    sorted = false;
                    break;
                }
            }
            
            if (sorted) {
                possible = true;
                break;
            }
        }
        
        if (possible) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    
    return 0;
}
