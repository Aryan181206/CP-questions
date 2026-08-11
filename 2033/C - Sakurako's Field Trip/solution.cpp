#include<bits/stdc++.h>
using namespace std ;
 
int main(){
    
    int t ; cin >> t ;
    while(t--){
        int n ; cin >> n ;
        vector<int> a(n);
        for(int i = 0 ; i < n ; i++){
            cin >> a[i];
        }
 
        for(int i = 1 ; i < n/2 ; i++){
 
            if(a[i]!=a[n-i-1]){
                if(a[i]==a[i-1]){
                    swap(a[i],a[n-i-1]);
                }
                else if(a[n-i-1]==a[n-i]){
                    swap(a[i],a[n-i-1]);
 
                }
 
            }
        }
 
    //    for(int i = 0 ; i < n ; i++){
    //         cout << a[i];
    //     }
 
        int dist = 0 ; 
         for(int i = 1 ; i < n ; i++){
           if(a[i]==a[i-1]){
            dist++;
           }
        }
        cout << dist <<endl;
 
 
    }
}