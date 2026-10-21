#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define test int t; cin >> t; while(t--)
#define fast ios::sync_with_stdio(0); cin.tie(0);
 
int main() {
    fast
    test {
        int n, x, y;
        cin >> n >> x >> y;
 
        map<pair<int,int>, int> mp;
        ll ans = 0;
 
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
 
            int rx = a % x;
            int ry = a % y;
 
            int need = (x - rx) % x;
 
            ans += mp[{need, ry}];
 
            mp[{rx, ry}]++;
        }
 
        cout << ans << '
';
    }
    return 0;
}