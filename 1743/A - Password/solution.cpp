#include<bits/stdc++.h>
using namespace std;
int main(){
 
    int t ;
    cin >> t ;
    while(t--){
        int n ; 
        cin >> n ; // numbers that no t used in Password
        vector<int> v(n) ;
        for(int i = 0 ; i < n ; i++){
            cin >> v[i] ;
        }
        //numbers that can be used in password
        int used = 10 - n ;
        // to find usedC2
        int seq = (used * (used - 1)) / 2 ;
        cout << seq * 6 << endl ;
 
 
    }
 
 
 
 
 
 
}