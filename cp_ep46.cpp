#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 10;
long long n;
long long cows;
long long position[N];
bool find_place(int dis)
{
    long long last_place = -1;
    long long cow_ct = cows;
    for (int i = 0; i < n; i++)
    {
        if ((position[i] - last_place) >= dis || last_place == -1)
        {
            last_place = position[i];
            cow_ct--;
        }
        if (cow_ct == 0)
        {
            break;
        }
    }
    return cow_ct == 0;
}
int main()
{
    cin >> n >> cows;
    for (int i = 0; i < n; i++)
    {
        cin >> position[i];
    }
    sort(position,position + n);
    long long lo = 0, hi = 1e9, mid;
    while ((hi - lo) > 1)
    {
        mid = (hi +lo)/2;
        if (find_place(mid))
        {
            lo = mid;
        }
        else
        {
            hi = mid - 1;
        }
    }
    if (find_place(hi))
    {
        cout << hi << endl;
    }
    else
    {
        cout << lo << endl;
    }
}