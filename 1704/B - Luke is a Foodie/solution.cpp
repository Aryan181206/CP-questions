#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int main() {
  
 
    int t;
    cin >> t;
 
    while (t--) {
       ll n , x ;
       cin >> n >> x ;
       vector<ll> a(n);
       for(ll i = 0 ; i<n;i++){
        cin>> a[i] ;
       }
 
       vector<pair<ll,ll>> segment(n);
       for(int i = 0 ; i<n;i++){
        segment[i] = {a[i] - x , a[i] + x} ;
       }
 
       ll ans = 0 ;
       ll l = segment[0].first;
       ll r = segment[0].second ;
 
       for(int i =1 ; i<n ;i++){
 
        l = max(l,segment[i].first);
        r = min(r,segment[i].second);
 
        if(l>r){
            ans++;
            l = segment[i].first;
            r =  segment[i].second;
        }
       }
 
       cout << ans << endl;
 
    }
}