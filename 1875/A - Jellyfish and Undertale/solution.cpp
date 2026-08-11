#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    int t; cin >> t ;
    while(t--){
        ll a , b ,n ;
        cin >> a >> b >> n;
        vector<ll> tool(n) ;
        for(ll i = 0 ; i<n ;i++){
            cin >> tool[i];
        }
        ll ans = 0 ;
        
        for(ll i = 0 ; i<n ; i++){
           ans = ans + min(tool[i],a-1);
        }
        cout << ans + b << endl;
      
    }
    return 0;
}