#include <bits/stdc++.h>
using namespace std;
 
int main() {
    
    int l, r;
    cin >> l >> r;
    
    vector<long long> k_pr(r + 1, 0);
    
    k_pr[1] = 1;
    
    for (int i = 1; i <= r; i++) {
        if (k_pr[i] == 0) continue;
        for (int j = 2 * i; j <= r; j += i) {
            k_pr[j] = (k_pr[j] + k_pr[i]) % 1000000007;
        }
    }
    
    long long otv = 0;
    for (int i = l; i <= r; i++) {
        otv = (otv + k_pr[i]) % 1000000007;
    }
    
    cout << otv << '\n';
    
    return 0;
}