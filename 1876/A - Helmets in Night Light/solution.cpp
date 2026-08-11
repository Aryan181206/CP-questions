#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
 
        ll n, p;
        cin >> n >> p;
        vector<ll>a(n),b(n);
        for(ll i = 0 ;i<n ;i++) cin >> a[i] ;
        for(ll i = 0 ;i<n ;i++) cin >> b[i] ;
        vector<pair<ll,ll>> v(n);
 
        for(ll i = 0 ; i<n ;i++){
            v[i] = {b[i],a[i]};
        }
        sort(v.begin(),v.end());
        ll min_cost = p ;
        ll shared = 1 ;
 
 
        for(auto it : v){
 
            ll sharing_cost = it.first;
            ll can_share = it.second ;
            
            if(sharing_cost>=p){
                break;
            }if(shared + can_share >n){
                min_cost = min_cost + (n-shared)*sharing_cost ;
                shared = n ;
                break;
            }
            else{
                min_cost += can_share*sharing_cost;
                shared = shared+ can_share;
            }
 
 
        }
 
        min_cost += (n-shared)*p;
        cout << min_cost << endl;
 
 
    }
}