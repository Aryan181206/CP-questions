#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t; cin >> t;
    while(t--){
        int n ;  cin >>  n ;
        int digit = 1 ;
        int firstd ;
 
        if(n<=9){
            cout << n << endl;
        }else{
            while(n>9){
                n= n/10 ;
                digit++;
                firstd = n;
            }
            cout << 9 * (digit-1) + firstd << endl ;
        }
 
        
    }
 
    
}