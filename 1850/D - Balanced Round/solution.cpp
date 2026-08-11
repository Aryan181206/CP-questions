#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    int t; cin >> t ;
    while (t--)
    {
       
        ll n , k ;
        cin >> n >> k ;
 
        vector<ll> a(n) ;
        for(int i = 0 ; i < n ; i++){
            cin >> a[i] ;
        }
 
        sort(a.begin() , a.end()) ;
        ll ct = 1 ; 
        ll ans = 1;
        for(ll i = 1 ; i<n ; i++){
            if(a[i] - a[i-1] <= k){
                ct++ ;
                
            }else{
                //reset
                ct = 1 ;
            }
             ans = max(ans,ct);
        }
 
        cout <<n- ans << endl ;
    }
    
    
    
    return 0;
}