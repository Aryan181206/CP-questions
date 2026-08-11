#include<bits/stdc++.h>
using namespace std ;
 
#define ll long long int 
 
int main(){
    int t; cin >> t ;
    while(t--){
        int n ; 
        cin >> n ;
        vector<int> p(n);
        for(int i= 0 ; i < n ; i++){
            cin >> p[i];
        }
        int  k = abs(p[0]-1) ;
        for(int i= 0 ; i < n ; i++){
            k = __gcd(abs(p[i] - (i + 1)),k);    
        }
        cout << k << endl;
        
    }
}