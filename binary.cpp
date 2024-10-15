#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int k = n;
    int count = 0;
    int answer = 0;
    int i = 1;
    while (n != 0)
    {
        n = n >> 1;
        count++;
    }
    int mask = 0;
    while (count > 0)
    {
        mask = mask << 1;
        mask = mask | 1;
        count--;
    }
    int rev = (~k) & mask;
    while (rev != 0)
    {
        int bit = rev % 10;
        answer = answer + (bit * i);
        rev = rev / 10;
        i = i * 2;
    }
    cout << answer;
}