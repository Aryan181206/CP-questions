#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
 
        ll n ; cin >> n ;
        vector<ll> snd_ele;
        ll low_first = LLONG_MAX ;
 
        for(ll i = 0 ; i<n ;i++){
            ll m ;
            cin >> m ;
            vector<ll>a(m);
            for (auto &x : a) {
				cin >> x;
            }
 
            sort(a.begin(),a.end());
            snd_ele.push_back(a[1]);
            low_first = min(low_first,a[0]);
 
        }
 
        sort(snd_ele.begin(),snd_ele.end());
        ll sum = accumulate(snd_ele.begin(),snd_ele.end(),0*1LL);
        //sum = sum-snd_ele[0];
 
 
 
 
       
 
        cout << sum + low_first -snd_ele[0] << endl;
 
 
    }
}