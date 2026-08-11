#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
int main()
{
    int t;
    cin >> t;
 
    while (t--)
    {
        int n;
        cin >> n;
        map<ll, ll> freq;
        ll total = 0;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            freq[x]++;
            total += x;
        }
 
        ll mx = 0, val = 0;
        for (auto &it : freq)
        {
            if (it.second > mx)
            {
                mx = it.second;
                val = it.first;
            }
        }
 
        ll others = n - mx;
 
 
 
        if (mx <= others + 1)
        {
            cout <<total << endl;
        }
        else
        {
            ll ans = total-val*mx+val*(others +2);
            cout << ans << endl;
        }
    }
 
 
}