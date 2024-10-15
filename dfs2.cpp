#include <bits/stdc++.h>
using namespace std;

class UnionFind {
public:
    vector<int> parent, rank;
    int components;

    UnionFind(int n) {
        parent.resize(n + 1);
        rank.resize(n + 1, 1);
        components = n;
        for (int i = 0; i <= n; i++) {
            parent[i] = i;
        }
    }

    int find(int u) {
        if (u != parent[u]) {
            parent[u] = find(parent[u]);
        }
        return parent[u];
    }

    void unite(int u, int v) {
        int rootU = find(u);
        int rootV = find(v);
        if (rootU != rootV) {
            if (rank[rootU] > rank[rootV]) {
                parent[rootV] = rootU;
            } else if (rank[rootU] < rank[rootV]) {
                parent[rootU] = rootV;
            } else {
                parent[rootV] = rootU;
                rank[rootU]++;
            }
            components--; 
        }
    }

    int getComponentCount() {
        return components;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        UnionFind uf(n);
        
        for (int i = 0; i < m; i++) {
            int a, d, k;
            cin >> a >> d >> k;
            for (int j = 0; j <= k; j++) {
                int currentPoint = a + j * d;
                if (j > 0) {
                    int previousPoint = a + (j - 1) * d;
                    uf.unite(previousPoint, currentPoint);
                }
            }
        }
        cout << uf.getComponentCount() << "\n";
    }
    return 0;
}
