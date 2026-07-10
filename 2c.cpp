#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    sort(a.begin(), a.end());
    
    long long count = 0;
    
    for (int i = 0; i < n - 2; i++) {
        int k = i + 2;
        for (int j = i + 1; j < n - 1; j++) {
            while (k < n && a[i] + a[j] > a[k]) {
                k++;
            }
            count += max(0, k - j - 1);
        }
    }
    
    cout << count << endl;
    
    return 0;
}