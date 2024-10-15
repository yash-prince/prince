// minimum spanning tree
// kruskals algorithm
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int par[N], size[N];
void make(int v)
{
    par[v] = v;
    size[v] = 1;
}
int find(int v)
{
    if (par[v] == v)
        return v;
    return par[v] = find(par[v]);
}
int Union(int u, int v)
{
    int a = find(u);
    int b = find(v);
    if (a != b)
    {
        if (size[a] < size[b])
            swap(a, b);
        par[b] = a;
        size[a] += size[b];
    }
}
int main()
{
    int n, m;
    cin >> n >> m;
    vector<pair<int, pair<int, int>>> edges;
    for (int i = 0; i < m; i++)
    {
        int u, v, wt;
        cin >> u>> v>> wt;
        edges.push_back({wt, {u, v}});
    }
    sort(edges.begin(), edges.end());
    for (int i = 1; i <= n; i++)
    {
       make(i);
    }
    
    int totalcost = 0;
    for (auto &edge : edges)
    {
        int wt = edge.first;
        int u = edge.second.first;
        int v = edge.second.second;
        if (find(u) == find(v))
            continue;
        Union(u, v);
        totalcost += wt;
    }
    cout << totalcost;
}
