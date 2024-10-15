#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int level[N];
vector<int> g[N];
bool vis[N];
void bfs(int source){
    queue<int> q;
    q.push(source);
    vis[source]=true;
    while(!q.empty()){
        int cur_v=q.front();
        q.pop();
        for(int child : g[cur_v]){
            if(vis[child]==1)continue;
            q.push(child);
            vis[child]=true;
            level[child]=level[cur_v]+1;
        }
    }
}
int main(){
    int n;
    cin>>n;
    for (int i = 0; i < n-1; i++)
    {
        int x, y;
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    bfs(1);
    for (int i = 1; i <= n; i++)
    {
        cout<<i<<" "<<level[i]<<endl;
    }
    

}