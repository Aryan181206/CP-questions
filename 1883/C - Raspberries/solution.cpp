#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll evenct = 0;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] % 2 == 0)
                evenct++;
        }
 
        bool onedivfound = false;
        ll op = LLONG_MAX;
        for (ll i = 0; i < n; i++)
        {
            if (a[i] % k == 0)
            {
                onedivfound = true;
                break;
            }
            else
            {
                ll remain = a[i] % k;
                op = min(op, k - remain);
            }
        }
        if (k == 4)
        {
            if (evenct >= 2)
            {
                op = min(op, 0 * 1LL);
            }
            else if (evenct == 1)
            {
                op = min(op, 1 * 1LL);
            }
            else
            {
                // even count 0 ;
                op = min(op, 2 * 1LL);
            }
        }
 
        if (onedivfound == true)
        {
            op = 0;
            // cout << op << endl;
        }
 
        // onediv fasle
        cout << op << endl;
    }
}