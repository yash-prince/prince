#include <bits/stdc++.h>
using namespace std;
int M=1e9+7;
int main()
{
        int t;
        cin >> t;
        int N = 1e5 + 10;
        int C[N][N];
        for (int n = 0; n < N; n++)
        {
            C[n][0] = 1;
            C[n][n] = 1;
            for (int k = 1; k < n; k++)
                C[n][k] = C[n][k - 1] + C[n - 1][k - 1];
        }
        int arr[t];
        int arr1[t];
        for (int i = 0; i < t; i++)
        {
            cin>>arr[i];
        }
        for (int i = 0; i < t; i++)
        {
            cin>>arr1[i];
        }
        for (int i = 0; i < t; i++)
        {
           cout<<((C[arr[i]][arr1[i]])%M)<<endl;
        }
}