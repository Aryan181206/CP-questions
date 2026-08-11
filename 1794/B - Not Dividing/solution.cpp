#include<bits/stdc++.h>
using namespace std ;
#define ll long long 
int main(){
    int t ; cin >> t ;
    while (t--)
    {
       
        ll n ;cin >> n ;
        vector<ll> a(n);
        for(int i = 0 ; i<n ;i++){
            cin >> a[i];
            if(a[i]==1){
                a[i]++;
            }
        }
        // vector<ll> b = a ;
        // sort(b.begin(),b.end());
        // reverse(b.begin(),b.end());
        // if(b==a){
        //     // decending order me hai 
        //     // same output
        //     for(ll x:a){
        //         cout >> x >> " " ;
        //     }
        // }else{
            // non deceing order hai
            for(ll i = 0 ; i<n-1 ; i++){
                if(a[i+1]%a[i]==0){
                    a[i+1]++;
                }
            }
 
            for(ll x:a){
                cout << x << " " ;
            }
 
 
        
    }
    
}