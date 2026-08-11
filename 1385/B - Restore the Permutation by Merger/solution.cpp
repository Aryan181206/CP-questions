#include<bits/stdc++.h>
using namespace std;
 
 
#define ll long long 
 
int main(){
    int t; cin >> t ;
    while(t--){
        ll n ; cin >> n ;
        ll len = 2*n ;
        vector<ll> per(len);
        for(int i = 0 ; i<len ; i++){
            cin >> per[i];
        }
        vector<ll> ansper;
        for(ll i = 0 ; i< len ; i++){
            auto it = find(ansper.begin(),ansper.end(),per[i]);
            if(it == ansper.end()){
                // not found
                ansper.push_back(per[i]);
            }
        }
 
        for(ll val : ansper){
            cout << val << " " ;
        }
        cout << endl ;
    }
}