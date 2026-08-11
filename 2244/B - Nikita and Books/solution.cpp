#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
int main() {
    int t;cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<ll> a(n);
 
        for (int i = 0; i < n; i++)
            cin >> a[i];
 
 
        bool ok = true;
 
 
        for (int i = 0; i < n - 1; i++) {
            if (a[i] < i+1) {
                ok = false;
                break;
            }
 
            ll extra = a[i] - (i+1);
            a[i+1] += extra;
        }
 
        if (ok && a[n-1] >= n)
            cout << "YES
";
        else
            cout << "NO
";
    }
 
 
 
 
 
}