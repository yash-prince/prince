#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
bool vis[8][8];
int level[8][8];
bool isValid(int x, int y){
    return (x>=0 && y>=0) && (x <8 && y<8); 
}
int getX(string s)
{
    return s[0] - 'a';
}
int getY(string s)
{
    return s[1] - '1';
}
vector<pair<int, int>> movements = {
    {2, -1}, {2, 1}, {-2, -1}, {-2, 1}, {1, 2}, {-1, 2}, {-1, -2}, {1, -2}};
int bfs(string start, string dest)
{
    int start_x = getX(start);
    int start_y = getY(start);
    int dest_x = getX(dest);
    int dest_y = getY(dest);
    vis[start_x][start_y] = 1;
    queue<pair<int, int>> q;
    q.push({start_x, start_y});
    level[start_x][start_y]=0;
    while(!q.empty()){
        pair<int ,int > v = q.front();
        int x = v.first , y= v.second;
        q.pop();
        for (auto movement : movements)
        {
            int childX= movement.first + x;
            int childY= movement.second + y;
            if(!isValid(childX ,childY))continue;
            if(!vis[childX][childY]){
                q.push({childX ,childY});
                vis[childX][childY]=1;
                level[childX][childY]=level[x][y]+1;
            }
        }
    }
    return level[dest_x][dest_y];
}
int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    cout<<bfs(s1,s2);
}