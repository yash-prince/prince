#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m, x;
        cin >> n >> m >> x;

        vector<bool> possible(n, false); // Initialize all players as impossible
        possible[x - 1] = true; // Mark the initial player as possible

        for (int i = 0; i < m; i++) {
            int k;
            char c;
            cin >> k >> c;

            vector<bool> temp(n, false); // Temporary vector to accumulate possible positions

            for (int j = 0; j < n; j++) {
                if (possible[j]) { // If the player is currently possible
                    int next_player_cw = (j + k) % n; // Calculate next player clockwise
                    int next_player_ccw = (j - k + n) % n; // Calculate next player counterclockwise
                    temp[next_player_cw] = true; // Mark the next player clockwise as possible
                    temp[next_player_ccw] = true; // Mark the next player counterclockwise as possible
                }
            }

            possible = temp; // Update the possible positions after the throw
        }

        // Count and output possible players
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (possible[i]) {
                count++;
            }
        }

        cout << count << endl;

        for (int i = 0; i < n; i++) {
            if (possible[i]) {
                cout << i + 1 << " "; // Output 1-indexed player numbers
            }
        }
        cout << endl;
    }

    return 0;
}