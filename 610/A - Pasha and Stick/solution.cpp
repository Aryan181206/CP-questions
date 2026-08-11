#include <bits/stdc++.h>
using namespace std ;
 
bool checkevenodd(long long n){
    // 1 -> even 
    // 0 -> odd
    if(n%2 == 0) {
        return true;
    }else{
        return false;
    }
}
 
int main(){
    long long n ;
    cin >> n ;
    if(checkevenodd(n)){
        long long ans = (n/2-1)/2 ;
        cout << ans << endl ;
 
    }else{
        cout << 0 <<endl ;
 
    }
 
}