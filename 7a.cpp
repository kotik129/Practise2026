#include <bits/stdc++.h>
using namespace std;
 
long long inf = 4e18;
 
struct Rebra {
    int u, v;
    long long w;
};
 
int main() {
    
    int n, m, s;
    cin >> n >> m >> s;
    
    vector<Rebra> rebra(m);
    for (int i = 0; i < m; i++) {
        cin >> rebra[i].u >> rebra[i].v >> rebra[i].w;
        rebra[i].u = rebra[i].u - 1;
        rebra[i].v = rebra[i].v - 1;
    }
    
    vector<long long> dist(n, inf);
    dist[s - 1] = 0;
    
    for (int i = 0; i < n - 1; i++) {
        bool pr = false;
        for (int j = 0; j < m; j++) {
            if (dist[rebra[j].u] != inf && dist[rebra[j].u] + rebra[j].w < dist[rebra[j].v]) {
                dist[rebra[j].v] = dist[rebra[j].u] + rebra[j].w;
                pr = true;
            }
        }
        if (!pr) break;
    }
    
    for (int j = 0; j < m; j++) {
        if (dist[rebra[j].u] != inf && dist[rebra[j].u] + rebra[j].w < dist[rebra[j].v]) {
            cout << "Negative cycle\n";
            return 0;
        }
    }
    
    for (int i = 0; i < n; i++) {
        if (dist[i] == inf) {
            cout << "inf" << " ";
        } else {
            cout << dist[i] << " ";
        }
    }
    cout << '\n';
}