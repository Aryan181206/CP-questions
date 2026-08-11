#include<bits/stdc++.h>
using namespace std ;
 
int main(){
    int t; cin >> t;
    while(t--){
        int n ; cin >> n ;
        int w[n] ;
        for(int i = 0 ; i < n ; i++){
            cin >> w[i] ;
        }
 
        // output the maximum number of operations Marisa can perform.
 
        int op = 0 ;
        int ct0 = 0;
        int ct1 = 0;
        int ct2 = 0 ;
       for(int i = 0 ; i < n ; i++){
           if(w[i] == 0 ) ct0++ ;
           else if(w[i] == 1) ct1++ ;
           else ct2++;
        }
 
        // for(int i = 0 ; i<n ; i++){
        //     for(int j = 0 ; j < n ; j++){
        //         if((w[i] + w[j])%3== 0){
        //             w[i] = INT16_MAX ;
        //             w[j] = INT16_MAX ;
        //             op++;
        //         }
        //     }
        // }
        // cout << op++ << endl;
 
         int pairs = min(ct1, ct2);
 
        ct1 = ct1 -pairs;
        ct2 = ct2 - pairs;
 
        int ans = ct0 + pairs + ct1/ 3 + ct2 / 3;
 
        cout<< ans << endl;
 
    }
}