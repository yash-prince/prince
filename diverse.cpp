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
      int a[n][m];
      int b[n][m];
      for (int i = 0; i < n; i++)
      {
         for (int j = 0; j < m; j++)
         {
            cin >> a[i][j];
            if (n > 1)
            {
               if (i < (n - 1))
               {
                  b[i + 1][j] = a[i][j];
               }
               else if (i == (n - 1))
               {
                  b[0][j] = a[i][j];
               }
            }
            else if (n == 1)
            {
               if (j < m - 1)
               {
                  b[i][j + 1] = a[i][j];
               }
               else if (j == (m - 1))
               {
                  b[i][0] = a[i][j];
               }
            }
         }
      }

      if ((n == 1) && (m == 1))
      {
         cout << -1;
      }
      else
      {
         for (int i = 0; i < n; i++)
         {
            for (int j = 0; j < m; j++)
            {
               cout << b[i][j] << " ";
            }
            cout << endl;
         }
      }
      cout << endl;
   }
}