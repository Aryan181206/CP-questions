#include<bits/stdc++.h>
using namespace std ;
 
#define ll long long int 
 
int main(){
    int t; cin >> t ;
    while(t--){
        ll n , k , x ; cin >> n >> k >> x ;
        // output YES and NO
        // vector<int> a(n+1);
        // for(int i =  1 ; i <=n ; i++){
        //     a[i] = i ;
        // }
        ll min_sum = k*(k+1)/2 ;
        ll max_sum = ((k) * (2*n  -  k   +  1) )/2  ;
 
        // cout << min_sum << " " << max_sum ;
    
        if(x >= min_sum && x <= max_sum)
        {
            cout << "YES" << endl ;
 
        } else{
            cout<< "NO" << endl ;
        }
        
 
        
 
 
 
    }
}