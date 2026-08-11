#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    int t; cin >> t ;
    while (t--){
        int n ;  cin >> n ;
        
        ll l = 0 ;
        ll r = LLONG_MAX ;
        for(int i = 1 ; i<=n ; i++){
            ll x ;
            cin >> x ;
 
            if(i%2!=0){
                r = min(r,x);
            }else{
                l = max(l,x);
            }
        }
 
        if(n%2!=0){
            //odd
 
            cout <<"NO" << endl ;
        }else{
            // even
 
 
            if(l+1 < r){
            cout << "YES" << endl;
        }else{
            cout <<"NO" << endl ;
        }
 
        }
        
       
    }
 
    
    return 0;
}