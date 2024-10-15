#include <bits/stdc++.h>
using namespace std;
bool check_num(vector<int> v, int m)
{
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == m)
        {
            return false;
        }
    }
    return true;
};
bool check_num1(vector<int> v, int m)
{
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == m)
        {
            return false;
        }
    }
    return true;
};
bool check_num2(vector<int> v, int m)
{
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == m)
        {
            return false;
        }
    }
    return true;
};
int main()
{
    int t, w;
    int count=0;
    vector<int> v;
    vector<int> v1;
    vector<int> v2;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, m, x;
        cin >> n >> m >> x;
        char a;
        for (int r = 0; r < m; r++)
        {
            int k;
            cin >> k;
            cin >> a;
            if (a == '1')
            {
                x = x + k;
                if (x < n)
                {
                    if (check_num(v, x))
                    {
                        v.push_back(x);
                        count++;
                    }
                    else if ((x + k) > n)
                    {
                        int b = (x + k) - n;
                        x = b;
                        if (check_num(v, x))
                        {
                            v.push_back(x);
                            count++;
                        }
                    }
                }
                if (a == '0')
                {
                    x = x + k;
                    if (x < n)
                    {
                        x = n - (x - 1);
                        if (check_num(v, x))
                        {
                            v.push_back(x);
                            count++;
                        }
                    }
                    else if ((x + k) > n)
                    {
                        int b = (x + k) - n;
                        b = n - (b - 1);
                        x = b;
                        if (check_num(v, x))
                        {
                            v.push_back(x);
                            count++;
                        }
                    }
                }
                if (a == '?')
                {
                    w = x;
                    x = x + k;
                    if (x < n)
                    {
                        x = n - (x - 1);
                        if (check_num1(v1, x))
                        {
                            v1.push_back(x);
                        }
                    }
                    else if ((x + k) > n)
                    {
                        int b = (x + k) - n;
                        b = n - (b - 1);
                        x = b;
                        if (check_num1(v1, x))
                        {
                            v1.push_back(x);
                        }
                    }

                    x = w + k;
                    if (x < n)
                    {
                        if (check_num2(v2, x))
                        {
                            v2.push_back(x);
                            count++;
                        }
                        else if ((x + k) > n)
                        {
                            int b = (x + k) - n;
                            x = b;
                            if (check_num2(v2, x))
                            {
                                v2.push_back(x);
                                count++;
                            }
                        }
                    }
                    for (int j = 0; j < v1.size(); j++)
                    {

                        for (int y = 0; y < v2.size(); y++)
                        {
                            if (v1[j] == v2[y])
                            {
                                v.push_back(v1[j]);
                                count++;
                            }
                        }
                    }
                }
            }
        }
    }
    cout << count;
    for (int i = 0; i < count; i++)
    {
        cout << v[i];
    }
}