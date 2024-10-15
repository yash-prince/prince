#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t; 
    while (t--) {
        int n;
        cin >> n; 

        vector<int> a(n);
        long long total_wealth = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            total_wealth += a[i];
        }

       
        if (n == 1 || n == 2) {
            cout << -1 << endl;
            continue;
        }

       
        int max_wealth = *max_element(a.begin(), a.end());

       
        double avg = (double)total_wealth / n;
        double threshold = avg / 2;
        int unhappy_count = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] < threshold) {
                unhappy_count++;
            }
        }

        
        if (unhappy_count > n / 2) {
            cout << 0 << endl;
            continue;
        }

       
        long long low = 0, high = 1e12, answer = -1;
        while (low <= high) {
            long long mid = (low + high) / 2;
            long long new_total_wealth = total_wealth + mid;
            double new_avg = (double)new_total_wealth / n;
            double new_threshold = new_avg / 2;

            int new_unhappy_count = 0;
            for (int i = 0; i < n; i++) {
                if (a[i] < new_threshold) {
                    new_unhappy_count++;
                }
            }

            
            if (new_unhappy_count > n / 2) {
                answer = mid;
                high = mid - 1; 
            } else {
                low = mid + 1;
            }
        }

        cout << answer << endl;
    }

    return 0;
}
