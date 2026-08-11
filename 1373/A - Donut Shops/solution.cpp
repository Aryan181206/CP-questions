#include<bits/stdc++.h>
using namespace std ;
 
int main(){
    int t ; cin >> t ;
    while(t--){
        long long a , b , c ;
        cin >> a >> b >> c ;
 
        long long ans1 ;
        long long ans2 ;
 
        if(a<c){
            ans1 = 1;
        }else{
            ans1= -1;
        }
        long long  ab = a*b ;
        if(ab > c ){
            ans2 = b ;
        }else{
            ans2 = -1;
        }
 
        cout << ans1 << " " << ans2 << endl ;
    }
 
    return 0 ;
 
}