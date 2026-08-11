#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t ; cin >> t ;
    while(t--){
        int  n , x1 , x2 , k ;
        cin >> n >> x1 >> x2 >> k;
        int x = abs(x1-x2) ;
        int ans = min(x , n-x) ;
        if(n<4){
            cout << ans << endl ;
        }
        else{
            cout << ans+k << endl ;
        }
 
    }
}