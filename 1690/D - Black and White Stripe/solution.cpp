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
 
        string s;
        cin >> s;
 
        ll l = 0;
        ll cntW = 0;
        ll ans = k;
 
        for (ll r = 0; r < n; r++)
        {
            if (s[r] == 'W')
                cntW++;
 
           
            if (r - l + 1 > k)
            {
                if (s[l] == 'W')
                    cntW--;
 
                l++;
            }
 
            
            if (r - l + 1 == k)
            {
                ans = min(ans, cntW);
            }
        }
 
        cout << ans << endl;
    }
 
}