#include <bits/stdc++.h>
using namespace std;
void print_binary(int num)
{
    for (int i = 30; i >= 0; i--)
    {
        cout << ((num >> i) & 1);
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int> ints(n, 0);
    for (int i = 0; i < n; i++)
    {
        int num_days;
        cin >> num_days;
        for (int j = 0; j < num_days; j++)
        {
            int days;
            cin >> days;
            ints[i] = (ints[i] | (1 << days));
        }
        print_binary(ints[i]);
        cout<<endl;
    }
    int intersection = (ints[0] & ints[1]);
    for (int i = 2; i < n - 1; i++)
    {
        intersection = (intersection & ints[i]);
    }
    print_binary(intersection);
}