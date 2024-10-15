#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int arr[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> arr[i][j];
            }
        }
        vector<pair<int, int>> v;
        vector<int> v1;
        if(n==1 || m==1){
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    if(n ==1)
                    {if(i==0 && j==0){
                        if(arr[i][j]>arr[i][j+1]){
                            v.push_back({i,j});
                            v1.push_back(arr[i][j+1]);
                        }
                    }
                    if(i==0 && j == m-1){
                        if(arr[i][j]>arr[i][j-1]){
                            v.push_back({i,j});
                            v1.push_back(arr[i][j-1]);
                        }
                    }
                    if(i == 0 && j > 0 && j < m-1){
                        if(arr[i][j]>arr[i][j-1] && arr[i][j]>arr[i][j+1]){
                            v.push_back({i,j});
                            int fi_max=max(arr[i][j-1],arr[i][j+1]);
                            v1.push_back(fi_max);
                        }
                    }
                    }
                    if(m==1){
                        if(i==0 && j==0){
                        if(arr[i][j]>arr[i+1][j]){
                            v.push_back({i,j});
                            v1.push_back(arr[i+1][j]);
                        }
                    }
                    if(j==0 && i == n-1){
                        if(arr[i][j]>arr[i-1][j]){
                            v.push_back({i,j});
                            v1.push_back(arr[i-1][j]);
                        }
                    }
                    if(j == 0 && i > 0 && i < n-1){
                        if(arr[i][j]>arr[i-1][j] && arr[i][j]>arr[i+1][j]){
                            v.push_back({i,j});
                            int fi_max=max(arr[i-1][j],arr[i+1][j]);
                            v1.push_back(fi_max);
                        }
                    }
                    }
                    
                }
                
            }
            
        }
        if(n > 1 && m >1){
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (i == 0 && j == 0)
                {
                    if (arr[i][j] > arr[i][j + 1] && arr[i][j] > arr[i + 1][j] && arr[i][j] > 0)
                    {
                        v.push_back({i, j});
                        int fi_max = max(arr[i][j + 1], arr[i + 1][j]);
                        v1.push_back(fi_max);
                    }
                }
                if (i == 0 && j == m - 1)
                {
                    if (arr[i][j] > arr[i][j - 1] && arr[i][j] > arr[i + 1][j] && arr[i][j] > 0)
                    {
                        v.push_back({i, j});
                        int fi_max = max(arr[i][j - 1], arr[i + 1][j]);
                        v1.push_back(fi_max);
                    }
                }
                if (i == n - 1 && j == m - 1)
                {
                    if (arr[i][j] > arr[i - 1][j] && arr[i][j] > arr[i][j - 1] && arr[i][j] > 0)
                    {
                        v.push_back({i, j});
                        int fi_max = max(arr[i - 1][j], arr[i][j - 1]);
                        v1.push_back(fi_max);
                    }
                }
                if (i == n - 1 && j == 0)
                {
                    if (arr[i][j] > arr[i][j + 1] && arr[i][j] > arr[i - 1][j] && arr[i][j] > 0)
                    {
                        v.push_back({i, j});
                        int fi_max = max(arr[i][j + 1], arr[i - 1][j]);
                        v1.push_back(fi_max);
                    }
                }
                if (i > 0 && i < n - 1 && j == 0)
                {
                    if (arr[i][j] > arr[i + 1][j] && arr[i][j] > arr[i - 1][j] && arr[i][j] > arr[i][j + 1] && arr[i][j] > 0)
                    {
                        v.push_back({i, j});
                        int fi_max = max(arr[i + 1][j], arr[i - 1][j]);
                        fi_max = max(fi_max, arr[i][j + 1]);
                        v1.push_back(fi_max);
                    }
                }
                if (i > 0 && i < n - 1 && j == m - 1)
                {
                    if (arr[i][j] > arr[i + 1][j] && arr[i][j] > arr[i - 1][j] && arr[i][j] > arr[i][j - 1] && arr[i][j] > 0)
                    {
                        v.push_back({i, j});
                        int fi_max = max(arr[i + 1][j], arr[i - 1][j]);
                        fi_max = max(fi_max, arr[i][j - 1]);
                        v1.push_back(fi_max);
                    }
                }
                if (i == 0 && j > 0 && j < m - 1)
                {
                    if (arr[i][j] > arr[i][j - 1] && arr[i][j] > arr[i][j + 1] && arr[i][j] > arr[i + 1][j] && arr[i][j] > 0)
                    {
                        v.push_back({i, j});
                        int fi_max = max(arr[i][j - 1], arr[i][j + 1]);
                        fi_max = max(fi_max, arr[i + 1][j]);
                        v1.push_back(fi_max);
                    }
                }
                if (i == n - 1 && j > 0 && j < m - 1)
                {
                    if (arr[i][j] > arr[i][j - 1] && arr[i][j] > arr[i][j + 1] && arr[i][j] > arr[i - 1][j] && arr[i][j] > 0)
                    {
                        v.push_back({i, j});
                        int fi_max = max(arr[i][j - 1], arr[i][j + 1]);
                        fi_max = max(fi_max, arr[i - 1][j]);
                        v1.push_back(fi_max);
                    }
                }
                if (i > 0 && i < n - 1 && j > 0 && j < m - 1)
                {
                    if (arr[i][j] > arr[i][j - 1] && arr[i][j] > arr[i][j + 1] && arr[i][j] > arr[i + 1][j] && arr[i][j] > arr[i - 1][j] && arr[i][j] > 0)
                    {
                        v.push_back({i, j});
                        int fi_max = max(arr[i][j - 1], arr[i][j + 1]);
                        fi_max = max(fi_max, arr[i + 1][j]);
                        fi_max = max(fi_max, arr[i - 1][j]);
                        v1.push_back(fi_max);
                    }
                }
            }
        }
        }
        
           for (int i = 0; i < v.size(); i++)
           {
                arr[v[i].first][v[i].second]=v1[i];
           }

            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    cout << arr[i][j] << " ";
                }
                cout << endl;
            }
            v.clear();
            v1.clear();
    }
}