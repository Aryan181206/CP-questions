// #include <bits/stdc++.h>
// using namespace std;
 
// int main(){
//     int t ;
//     cin >> t ;
//     while(t--){
//         int n ;
//         cin >> n ;
//         int pairs = 0 ;
//         for(int i = 1 ; i <= n ; i++){
//             for(int j = 1 ; j <=n ; j++){
//                 int gcd = __gcd(i,j) ;
//                 int gcd_square = gcd * gcd ;
//                 if( (i * j) / 3 <= gcd_square){
//                     pairs++ ;
//                 }
//             }
//         }
//         cout << pairs << endl ;
//     }
 
// }
 
// correct but time imit exceeded
// we have to optimize it
 
#include <bits/stdc++.h>
using namespace std;
 
 
int main(){
    int t ; 
    cin >> t ;
    while(t--){
        int n ;
        cin >> n ;
        int pairs = 0 ;
        pairs = n + (n/2)*2 + (n/3)*2 ;
        cout << pairs << endl ;
    }
 
}