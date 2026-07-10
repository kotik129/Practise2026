#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    long long ans = 0;
    
    for (int i = 0; i < n; i++) {
        int l = i, r = i;
        
        while (l > 0 && a[l - 1] <= a[i]) {
            l--;
        }
        
        while (r < n - 1 && a[r + 1] < a[i]) {
            r++;
        }
        
        ans += a[i] * (i - l + 1) * (r - i + 1);
    }
    
    cout << ans << '\n';
    
    return 0;
}