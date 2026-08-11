#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    int t; cin >> t ;
    while(t--){
       int n; cin >> n ;
       vector<int> a(n);
       for(int i = 0 ; i<n;i++){
        cin>> a[i];
       }
       // output k 0 -8 
       // k line -> l , r
       bool isallzero = true ;
       for(int i = 0 ; i<n;i++){
        if(a[i]!=0){
            isallzero = false;
            break;
        }
       }
       if(isallzero == false){
        // non zero presernt 
        if(n%2==0){
            // even
            cout << 2 << endl ;
        cout << 1 << " " << n << endl ;
        cout << 1 << " " << n << endl ;
        }else{
            // n is odd
            cout << 4 << endl ;
        cout << 1 << " " << n-1 << endl ;
        cout << 1 << " " << n-1 << endl ;
        cout << n-1 << " " << n << endl ;
        cout << n-1 << " " << n << endl ;
            
        }
        
 
 
       }else{
        // all zero
        cout<< 0 << endl;
       }
 
    }
    return 0;
}