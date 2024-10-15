#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
vector<int> conn_vertex[ N];
bool vis[N];
void dfs(int vertex){
    vis[vertex]=1;
    for (int child : conn_vertex[vertex]){
        cout<<vertex<<" "<<child;
        cout<<endl;  
        if(vis[vertex]==1) continue;
        cout<<child;
        dfs(child);
    }
}
int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        conn_vertex[x].push_back(y);
        conn_vertex[y].push_back(x);
    }
    dfs(conn_vertex[1][0]);
}