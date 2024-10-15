#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 10;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> a(n, vector<int>(m));
        vector<vector<int>> b(n, vector<int>(m));

        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> a[i][j];
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> b[i][j];
            }
        }

        bool check = true;
        for (int i = 0; i < n; i++) {
            sort(a[i].begin(), a[i].end());
            sort(b[i].begin(), b[i].end());

            for (int j = 0; j < m; j++) {
                if (a[i][j] != b[i][j]) {
                    check = false;
                    break;
                }
            }
            if (!check) {
                break;
            }
        }

        if (check) {
            cout << "yes\n";
        } else {
            cout << "no\n";
        }
    }

    return 0;
}
