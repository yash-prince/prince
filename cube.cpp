#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n, f, k;
        cin >> n >> f >> k;
        f--;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int favorite_value = a[f];

    
        vector<int> sorted_a = a;
        sort(sorted_a.rbegin(), sorted_a.rend());

       
        int count_same_value = 0;
        int count_removed = 0;
        for (int i = 0; i < n; i++) {
            if (sorted_a[i] == favorite_value) {
                count_same_value++;
                if (i < k) {
                    count_removed++;
                }
            }
        }

       
        if (count_removed == count_same_value) {
            cout << "YES\n"; 
        } else if (count_removed == 0) {
            cout << "NO\n";
        } else {
            cout << "MAYBE\n";
        }
    }

    return 0;
}
