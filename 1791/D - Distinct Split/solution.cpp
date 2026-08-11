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
        string s;
        cin >> s;
 
        unordered_set<char> st;
        // precompution ;
        vector<ll> pref(n + 1, 0);
        vector<ll> suff(n + 1, 0);
 
        ll dist_ct = 1;
        for (ll i = 1; i <= n; i++)
        {
            st.insert(s[i - 1]);
            pref[i] = st.size();
        }
        st.clear();
 
        for (ll i = n; i >= 1; i--)
        {
            st.insert(s[i - 1]);
            suff[i] = st.size();
        }
 
        ll ans = 0;
        for (ll i = 0; i < n; i++)
        {
            ans = max(ans, pref[i] + suff[i + 1]);
        }
        cout << ans << endl;
    }
}