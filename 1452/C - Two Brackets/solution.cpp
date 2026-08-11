// #include<bits/stdc++.h>
// using namespace std ;
 
// int main(){
//     int t ; cin >>t ;
//     while(t--){
//         string s ;
//         cin >> s ;
//         int n = s.size();
//         int moves =  0 ;
//         int open1 = 0 ;  // (
//         int open2 = 0 ; // [
//         for(char b : s){
//             if(b == '('){
//                 open1++;
//             }else if(b== '['){
//                 open2++;
//             }else if(b==')'){
//                 if(open1>=1){
//                     moves++;
//                     open1--;
//                 }
//             }else if(b==']'){
//                 if(open2>=1){
//                     moves++;
//                     open2--;
//                 }
//             }
//         }
//         cout << moves << endl ;
//     }
// }
 
// approach 2
 
#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t; cin >> t ;
    while(t--){
        string s ;
        cin >> s ;
        stack<char> bra1;
        stack<char> bra2;
        int ans = 0 ;
        for(char b : s) {
            if(b=='('){
                bra1.push(b);
            }
            else if(b=='['){
                bra2.push(b);
            }
            else if(b==')' && !bra1.empty()){
                bra1.pop();
                ans++;
            }
            else if(b==']' && !bra2.empty()){
                bra2.pop();
                ans++;
            }
        }
        cout<< ans << endl ;
    }
}