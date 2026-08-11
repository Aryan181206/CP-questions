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
        ll length = n * k;
        vector<ll> a(length);
        for (ll i = 0; i < length; i++)
            cin >> a[i];
        // which occurance is to select
        ll select = ceil(1.0 * n / 2);
        // select every select till k time
        //reverse(a.begin(), a.end());
        ll total_sum = 0;
 
        ll i = n * k;
        while (k--)
        {
            i = i - ((n / 2) + 1);
            total_sum += a[i];
        }
        cout << total_sum << endl;
    }
}