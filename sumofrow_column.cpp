#include <bits/stdc++.h>
using namespace std;
int sum_of_array(int n, int m, const vector<vector<int>>& a) {
    
    int limit = min(n, m);
    for (int i = 0; i < limit; i++) {
        int row_sum = 0;
        int col_sum = 0;
        
        for (int j = 0; j < m; j++) {
            row_sum += a[i][j];
        }
        
        for (int j = 0; j < n; j++) {
            col_sum += a[j][i];
        }
        if (row_sum != col_sum) {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int rows;
    int cols;
    cin >> rows >> cols;
    vector<vector<int>> arr(rows, vector<int>(cols));;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << sum_of_array(rows, cols, arr);
}