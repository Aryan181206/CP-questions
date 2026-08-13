#include<bits/stdc++.h>
using namespace std;
 
#define ll long long 
 
int main(){
    int t ; cin >> t ;
    while(t--){
        ll n , m ;
        cin >> n >> m ;
        vector<ll> a(n);
        vector<ll> b(m);
 
        for(ll i=0 ;i<n;i++){
            cin>> a[i];
        }
 
        for(ll i=0 ;i<m;i++){
            cin>> b[i];
        }
 
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
 
        bool ok ;
        if(n>= 2*m){
            ok = true;
        }
        else{
            ok = false;
        }
 
        
        for(ll i =0 ; i<m &&ok ;i++){
            if(a[i]>= b[i]) ok = false;
            if(a[n-m+i] <= b[i]) ok = false ;
        }
 
        if(ok) cout << "YES" << endl;
        else cout << "NO" << endl;
 
 
 
    }
    
}