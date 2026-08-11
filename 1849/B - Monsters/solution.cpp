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
 
        vector<pair<ll, ll>> hp(n); // values, index
 
        for (ll i = 0; i < n; i++){
            ll x ;
            cin >> x ;
            hp[i] = {x,i+1} ;
        }
 
        for (ll i = 0; i < n; i++){
            hp[i].first = hp[i].first % k ;
            if(hp[i].first==0){
                hp[i].first= k;
            }
        }
 
        sort(hp.begin(), hp.end(), [&](pair<long long, long long> a, pair<long long, long long> b) {
			if (a.first != b.first)
				return a.first > b.first;
			return a.second < b.second;
		});
 
        for (auto it : hp)
			cout << it.second << " ";
		cout << endl;
    }
}