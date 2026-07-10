#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, m;
    cin >> n >> m;
    
    vector<string> matr(n);
    for (int i = 0; i < n; i++) {
        cin >> matr[i];
    }
    
    int x, y;
    cin >> x >> y;
    
    vector<vector<int>> dist(n, vector<int>(m, -1));
    queue<pair<int, int>> q;
    
    dist[x - 1][y - 1] = 0;
    q.push({x - 1, y - 1});
    
    int coordx[] = {-1, 1, 0, 0};
    int coordy[] = {0, 0, -1, 1};
    
    while (!q.empty()) {
        int ax = q.front().first;
        int ay = q.front().second;
        q.pop();
        
        for (int i = 0; i < 4; i++) {
            int bx = ax + coordx[i];
            int by = ay + coordy[i];
            
            if (bx >= 0 && bx < n && by >= 0 && by < m) {
                if (matr[bx][by] == '.' && dist[bx][by] == -1) {
                    dist[bx][by] = dist[ax][ay] + 1;
                    q.push({bx, by});
                }
            }
        }
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << dist[i][j];
            if (j < m - 1) cout << " ";
        }
        cout << '\n';
    }
    
    return 0;
}