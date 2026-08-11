#include <bits/stdc++.h>
using namespace std;
 
long long findGCD(const vector<long long>& a) {
    long long g = a[0];
    for (int i = 1; i < a.size(); i++) {
        g = __gcd(g, a[i]);
    }
    return g;
}
 
int main() {
    
 
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
 
        long long g = findGCD(a);
 
        // find smallest x >= 2 such that gcd(x, g) == 1
        long long ans = -1;
        for (long long x = 2; x <= 100; x++) { // 100 is enough since primes under 100 will surely include coprime
            if (__gcd(x, g) == 1) {
                ans = x;
                break;
            }
        }
 
        cout << ans << "
";
    }
 
    return 0;
}