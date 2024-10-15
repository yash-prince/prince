// calculating depth of a tree
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
vector<int> g[N];
bool vis[N];
int n;
vector<int> depth_size(n+1, 0);
void dfs(int vertex, int par)
{
    vis[vertex] = true;
    if(vertex == 1){
        depth_size[vertex] = 0;
    }else 
    depth_size[vertex] = depth_size[par] + 1;
    for (int child : g[vertex])
    {
        if (vis[child] == 1)
            continue;
            // if(child == parent) continue;   if we dont make a visited array then this condition should will be executed
        dfs(child, vertex);
    }
}
int main()
{
    cin >> n;
    for (int i = 0; i < n-1; i++)
    {
        int x , y;
        cin>>x >>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    dfs(1 , 0);
    for (int i = 0; i < n+1; i++)
    {
        cout<<i<<" "<<depth_size[i]<<endl;
    }
    
    
}