#include<bits/stdc++.h>
using namespace std;
 
#define ll long long 
 
 
int main() {
    int t ;  cin >> t ;
    while(t--){
        ll n ; cin >> n ;
        ll count_3 = 0 ;
        ll count_2 = 0 ;
 
        while(n>0 && n%3 == 0){
            count_3++;
            n = n/3;
        }
         while(n>0 && n%2 == 0){
            count_2++;
            n = n/2;
        }
        if(n>1 || count_2 > count_3){
            cout << -1 <<endl ;
 
        }else{
            cout << count_3 + (count_3 - count_2) << endl;
        }
    }
}