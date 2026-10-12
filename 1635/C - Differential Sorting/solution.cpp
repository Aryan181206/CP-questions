#include <bits/stdc++.h>
using namespace std;
 
#define ll long long 
 
bool isSorted(vector<ll> &v){
    vector<ll> a = v ;
    sort(a.begin(),a.end());
    if(a==v) return true;
    else return false;
}
 
int main() {
    
    int t;
    cin>>t ;
    while(t--){
        int n ; cin>> n ;
        vector<ll> v(n);
        for(int i = 0 ; i<n ;i++){
            cin >> v[i] ;
        }
        
        ll op = 0 ;
        
        if(v[n-2]>v[n-1]){
           
            cout << "-1" << endl;
        }
        
        else if(v[n-1]>=0){
            cout << n-2 << endl;
            
             for (int i = 1; i <= n-2; i++) {
                cout << i << " " << n-1 << " " << n << '
';
            }
            
        }
        else{
            if(is_sorted(v.begin(),v.end())){
                cout << 0 << endl;
            }else{
                cout << -1 << endl ;
            }
        }
        
    }
 
}