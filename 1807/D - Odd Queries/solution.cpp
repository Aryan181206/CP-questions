#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    int t; cin >> t ;
    while (t--){
        int n , q ;
        cin >> n >> q ;
        vector<ll> a(n + 1), prefix(n + 1);
         for (int i = 1; i <= n; i++) {
            cin >> a[i];
            prefix[i] = prefix[i - 1] + a[i];
        }
        int oldsum = accumulate(a.begin(),a.end(),0);
 
        while (q--)
        {
            
            ll l , r , k;
           cin >> l >>r >> k;
           ll lrsum = prefix[r] - prefix[l-1];
           
 
           int newsum = oldsum -lrsum  + k*(r-l+1) ;
 
           if(newsum%2 != 0 ){
            // odd
            cout << "YES" << endl ;
           }else{
            cout << "NO" << endl ;
           }
 
        }
        
        
    }
 
    
    return 0;
}