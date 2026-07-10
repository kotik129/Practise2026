#include <bits/stdc++.h>
using namespace std;
 
 
int main() {
 
    int n;
    cin >> n;
    
    long long otv = 1;
    for (int i = 2; i <= n - 1; i++) {
        otv = (otv * i) % 1000000007;
    }
 
    otv = (otv * (1000000007 + 1) / 2) % 1000000007; 
    
    cout << otv << '\n';
    
    return 0;
}