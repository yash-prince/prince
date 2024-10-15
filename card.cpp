#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        unordered_map<int, int> freq;
        for (int num : a) {
            freq[num]++;
        }

        vector<pair<int, int>> distinct;
        for (const auto& entry : freq) {
            distinct.push_back({entry.first, entry.second});
        }
        sort(distinct.begin(), distinct.end());

        int max_cards = 0;
        int left = 0;
        int current_sum = 0;

        for (int right = 0; right < distinct.size(); right++) {
            current_sum += distinct[right].second;

            while (right - left + 1 > k) {
                current_sum -= distinct[left].second;
                left++;
            }

            if (right > 0 && distinct[right].first != distinct[right - 1].first + 1) {
                left = right;
                current_sum = distinct[right].second;
            }

            max_cards = max(max_cards, current_sum);
        }

        cout << max_cards << endl;
    }
    
    return 0;
}