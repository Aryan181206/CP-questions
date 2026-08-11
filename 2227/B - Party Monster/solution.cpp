#include<bits/stdc++.h>
using namespace std ;
 
int main(){
    int t ; cin >> t ;
    while(t--){
        int n ; cin >> n ;
        string s;
        cin >> s;
        bool possible =  false ;
        int ctOB = 0 ;
        int ctCB = 0 ;
        for(char ch : s){
            if (ch == '(') ctOB++; 
            else ctCB++ ;
        }
        if(ctCB == ctOB) cout << "YES" << endl ;
        else cout << "NO" << endl ;
    }
}