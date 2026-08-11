#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    int t; cin >> t ;
    while(t--){
        ll cnt = 0;
        ll n ; cin >> n ;
        ll i = 1 ;
        for(; i<=n ; i++){
            if(n%i!=0){
               break;
            }
        }
        cout << i-1 << endl;
 
    }
    return 0;
}