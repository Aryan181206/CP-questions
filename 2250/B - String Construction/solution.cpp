// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// int main() {
//     int t; cin >> t ;
//     while (t--){
//         int n ;  cin >> n ;
        
//         ll l = 0 ;
//         ll r = LLONG_MAX ;
//         for(int i = 1 ; i<=n ; i++){
//             ll x ;
//             cin >> x ;
 
//             if(i%2!=0){
//                 r = min(r,x);
//             }else{
//                 l = max(l,x);
//             }
//         }
 
//         if(n%2!=0){
//             //odd
 
//             cout <<"NO" << endl ;
//         }else{
//             // even
 
 
//             if(l+1 < r){
//             cout << "YES" << endl;
//         }else{
//             cout <<"NO" << endl ;
//         }
 
//         }
        
       
//     }
 
    
//     return 0;
// }
 
 
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t ; cin >> t ;
    while(t--){
        ll n , k ;
        cin >> n >> k;
        ll b = n - k ;
 
        if(k == n-1){
            cout << -1 << endl ;
        }else{
            if(k==0){
            ll zc = n/2 ;
            ll oc = (n+1)/2 ;
            vector<ll> arr[b] ;
            for(ll i = 0 ; i < b ; i++){
            if(i%2==0) {
                arr[i].push_back(0);
                zc--;
             }
            else {arr[i].push_back(1);
                oc--;
            } 
        }
 
        for (int i = 0; i < b; i++) {
            for (ll x : arr[i]) {
                 cout << x ;
                }
            }
            cout << endl ;
                
 
            }else{
                //zeros kam rakhna
        ll zc = n/2 ;
        ll oc = (n+1)/2 ;
 
        vector<ll> arr[b] ;
 
        for(ll i = 0 ; i < b ; i++){
            if(i%2==0) {
                arr[i].push_back(0);
                zc--;
             }
            else {arr[i].push_back(1);
                oc--;
            } 
        }
 
        while(zc){
            arr[0].push_back(0);
            zc--;
        }
 
        while(oc){
            arr[1].push_back(1);
            oc--;
        }
 
        for (int i = 0; i < b; i++) {
            for (ll x : arr[i]) {
                 cout << x ;
                }
            }
            cout << endl ;
 
        }
 
            }
        
    }
}