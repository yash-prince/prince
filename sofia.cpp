#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int b[n];
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        int m;
        cin >> m;
        int d[m];
        for (int i = 0; i < m; i++) {
            cin >> d[i];    
        }
        map<long long, int> freq_a, freq_b, freq_d;

        for (int i = 0; i < n; i++) {
            freq_a[a[i]]++;
        }
        for (int i = 0; i < n; i++) {
            freq_b[b[i]]++;
        }
        for (int i = 0; i < m; i++) {
            freq_d[d[i]]++;
        }

        bool canTransform = true;
        bool ok=false;
        for (int i = 0; i < n; i++) {
            if(d[m-1]==b[i]) ok=true;
            if (a[i] != b[i]) {
                if (freq_d[b[i]] > 0) {
                    freq_d[b[i]]--;
                } else {
                    canTransform = false;
                    break;
                }
            }
        }

        if (canTransform==1 && ok==1) {
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }
    }
}
