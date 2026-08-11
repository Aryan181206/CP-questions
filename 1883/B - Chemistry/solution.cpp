#include<bits/stdc++.h>
using namespace std;
 
 // 1 based initailly 0
int main(){
    int t; cin >> t ;
    while(t--){
        int n ,k ;
        cin >> n >> k;
        string s ;
        cin >> s;
 
        vector<int> hsh(26,0);
        for(char c:s){
            hsh[c - 'a']++ ;  // count of charters store karliye
        }
        int odd_ct = 0;
        
            for(int i = 0 ; i<26 ; i++){
                odd_ct = odd_ct + hsh[i]%2  ;
        }
 
        if(odd_ct>k+1){
            cout<< "NO" << endl;
        }else{
            cout << "YES" << endl;
        }
        
        
 
    }
}