#include<bits/stdc++.h>
using namespace std ;
 
#define ll long long
 
int main(){
    int t ; cin >> t ;
    while(t--){
        ll n ; cin >> n ;
        vector<ll> a(n);
        vector<ll> b(n);
        for(int i = 0 ; i<n ; i++){
            cin>> a[i];
        }
        for(int i = 0 ; i<n ; i++){
            cin >> b[i];
        }
 
        ll a_min = *min_element(a.begin(),a.end());
        ll b_min = *min_element(b.begin(),b.end());
 
        vector<ll> a_new(n);
        vector<ll> b_new(n);
 
        ll moves= 0;
 
        for(int i = 0 ; i<n ; i++){
            a_new[i]=a[i]-a_min;
            b_new[i]=b[i]-b_min;
        }
 
        for(int i = 0 ; i<n ; i++){
           if(a_new[i]==b_new[i]){
            moves = moves+a_new[i];
           }else{
            ll abmax = max(a_new[i],b_new[i]);
            moves = moves + abmax ;
           }
        }
 
        cout << moves << endl;
 
 
 
 
 
 
 
    }
}