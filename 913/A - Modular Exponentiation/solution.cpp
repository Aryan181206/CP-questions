#include<bits/stdc++.h>
 
 
// we have to find (a^b) mod m not this reverse of this m mod (a^b)
using namespace std ;
 
 
 
int main(){
    int n , m ; cin >> n >> m ;
    
    if(n>30){
        cout << m << endl ;
    }
    else{
        int val = pow(2 , n) ; // 2^n
        cout << m % val << endl ;
    }
    
}