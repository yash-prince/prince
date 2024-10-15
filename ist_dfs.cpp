#include <bits/stdc++.h>
using namespace std;

const int N =2e5+10;

int parent[N];
int c_size[N];
int find(int a) {
    if (parent[a] != a) {
        parent[a] = find(parent[a]);
    }
    return parent[a];
}

void union_sets(int a, int b) {
    a = find(a);
    b = find(b);
    if (a != b) {
        if (c_size[a] < c_size[b]) swap(a, b);
        parent[b] = a;
       c_size[a] += c_size[b];
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        for (int i = 1; i <= n; i++) {
            parent[i] = i; 
            c_size[i] = 1;
        }

        int ct = 0;
        for (int i = 0; i < m; i++) {
            int a, d, k;
            cin >> a >> d >> k;

            int one_con = 0;
            for (int j = 0; j <= k; j++) {
                int u = a + j * d;
                if (u <= n) {
                    if (j > 0) {
                        int v = a + (j - 1) * d;
                        if (find(u) != find(v)) {
                            union_sets(u, v);
                        }
                    }
                }
            }
        }

        
        int sep_ct = 0;
        for (int i = 1; i <= n; i++) {
            if (find(i) == i) {
                sep_ct++;
            }
        }
        
        cout << sep_ct << endl;
    }

    return 0;
}
