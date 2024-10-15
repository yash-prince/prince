#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int n;
vector<int>ht(N , 0);
vector<int> g[N];
void dfs(int vertex , int par)
{
    for(int child : g[vertex]){
        if(child == par) continue;
        dfs(child , vertex);
        ht[vertex] = max(ht[vertex] ,ht[child] + 1);
    }
}
int main()
{
    cin>>n;
    for (int i = 0; i < n-1; i++)
    {
       int x, y;
       cin>>x>>y;
       g[x].push_back(y);
       g[y].push_back(x);
    }
    dfs(1 ,0);
    for (int i = 1; i <= n; i++)
    {
        cout<< i <<" "<<ht[i];
        cout<<endl;
    }
}