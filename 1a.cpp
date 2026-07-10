#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int l, r;
    while (cin >> l >> r) {
        if (l == 0 && r == 0) {
            break;
        }
        l--;
        r--;
        reverse(arr.begin() + l, arr.begin() + r + 1);
    }
    
    for (int i = 0; i < n; i++) {
        cout << arr[i];
        if (i < n - 1) {
            cout << " ";
        }
    }
    cout << endl;
    
    return 0;
}