#include<bits/stdc++.h>
using namespace std;
 
using ll = long long ;
 
int main() {
    int t ; cin >> t;
    while(t--){
         int n;
    cin >> n;
 
    vector<ll> f(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> f[i];
    }
 
    vector<ll> d(n); // d[i] = f(i+1) - f(i)
 
    for (int i = 1; i < n; i++) {
        d[i] = f[i + 1] - f[i];
    }
 
    vector<ll> a(n + 1);
 
    // sum
    ll S = (f[1] + f[n]) / (n - 1);
 
    // first
    a[1] = (d[1] + S) / 2;
 
    // middle
    for (int i = 2; i <= n - 1; i++) {
        a[i] = (d[i] - d[i - 1]) / 2;
    }
 
    // last
    a[n] = (S - d[n - 1]) / 2;
 
    for (int i = 1; i <= n; i++) {
        cout << a[i] << " ";
    }
    cout << endl ;
 
 
 
 
 
    }
}