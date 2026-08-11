#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t ; cin >> t ;
    while(t--){
        string s ; cin >> s ;
        int ones = 0;
        int zeros = 0;
        for(int i = 0 ; i < s.size() ; i++){
            if(s[i]=='1'){
                ones++;
            }else{
                zeros++;
            }
        }
        int min_o = min(ones, zeros);  // operation happens
        if(min_o%2==0){
            cout << "NET" << endl;
        }else{
            cout << "DA" << endl;
        }
 
    }
}