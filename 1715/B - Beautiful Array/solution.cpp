#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
int main()
{
 
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k, b, s;
        cin >> n >> k >> b >> s;
        ll min_s = k * b;
        ll max_s = n * (k - 1) + (k * b);
 
        if (s < min_s || s > max_s)
        {
            cout << "-1" << endl;
        }
        else
        {
            vector<ll> ans(n, 0);
 
            ans[0] = min_s;
 
            s = s - min_s;
            for (ll i = 0; i < n; i++)
            {
                ll add = min(k - 1, s);
                ans[i] = ans[i] + add;
                s = s - add;
            }
 
            for (ll a : ans)
            {
                cout << a << " ";
            }
            cout << endl;
        }
    }
}