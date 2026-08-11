#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
 
 
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n , k ,q ;
        cin >> n >> k >> q ;
         
        vector<ll> a(n  );
 
        for(ll i= 0 ; i<n ; i++){
            cin >> a[i] ;
            if(a[i]<=q){
                a[i] = 1 ;
            }else{
                a[i] = 0 ;
            }
        }
 
        // now array look like -> 1 1 1 0 0 1 0 0 1
 
        // now of ways -> count nad reset tecnique
 
        ll i = 0 ;
        ll ct = 0;
        ll ways = 0 ;
        while(i<n){
            if(a[i]==1){
                ct++;
            }else{
                // a[i] == 0 ;
                if(ct>=k){
                    ll f = ct-k+1;
                    ways += (f*(f+1))/2 ;
                }
                ct = 0;
            } 
            i++ ;       
        }
 
        if(ct>=k){
            ll f = ct - k +1 ;
            ways += (f*(f+1))/2;
        }
 
        cout << ways << endl ;
 
 
    }
}