#include <bits/stdc++.h>
using namespace std;

// Function to check if a number is a perfect square
bool find_sqrt(int num) {
    if (num < 0) return false;  // Negative numbers cannot be perfect squares
    int sqrt_num = static_cast<int>(sqrt(num));  // Get the integer part of the square root
    return sqrt_num * sqrt_num == num;  // Check if squaring the integer part gives back the original number
}

int main() {
    int t;
    cin >> t;  // Number of test cases

    while (t--) {
        int n;
        cin >> n;  // Input number to check if it's a perfect square

        // Output YES if n is a perfect square, otherwise NO
        if (find_sqrt(n)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
