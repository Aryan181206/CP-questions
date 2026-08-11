#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
int main()
{
    ll t;
    cin >> t;
 
    while (t--)
    {
        ll n;
        cin >> n;
 
        vector<ll> a(n + 2);
 
        for (ll i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
 
        ll ans = 1;
 
        for (ll i = 1; i < n; i++)
        {
            if (a[i] != a[i + 1])
                ans++;
        }
 
        ll toadd = 0;
 
        for (ll i = 0; i + 3 <= n + 1; i++)
        {
            ll a1 = a[i];
            ll b = a[i + 1];
            ll c = a[i + 2];
            ll d = a[i + 3];
 
            if (a1 == b && c == d && b != c)
                toadd = 2;
 
            if (a1 == b && c != b && d != b)
                toadd = max(toadd, 1LL);
 
            if (c == d && b != c && a1 != c)
                toadd = max(toadd, 1LL);
        }
 
        cout << ans + toadd << '
';
    }
 
    return 0;
}