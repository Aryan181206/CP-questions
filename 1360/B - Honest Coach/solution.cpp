#include<bits/stdc++.h>
using namespace std;
 
#define ll long long 
int main() {
 
    int t ; cin >> t ;
    while(t--){
        ll n ; cin >> n ;
        vector<ll> s(n);
        
        for(int i = 0; i<n ;i++){
            cin >> s[i];
        }
 
        sort(s.begin(),s.end());
 
        vector<ll> difvec(n-1);
        for(int i = 0 ; i<n-1 ; i++){
            difvec[i] = abs(s[i]-s[i+1]);
        }
        ll reqans= *min_element(difvec.begin(),difvec.end());
 
        cout<< reqans << endl;
 
    }
}