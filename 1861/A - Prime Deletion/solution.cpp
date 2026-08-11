#include<bits/stdc++.h>
using namespace std ;
int main(){
    int t; cin>>t ;
    
    while(t--){
        string s ;  // 1 to 9 all nuber 1 time
        cin >> s ;
        int index_1 ;
        int index_3 ;
        for(int i = 0 ; i < s.size() ; i++){
            if(s[i] == '1') index_1 = i ;
            else if(s[i] == '3') index_3 = i ;
        }
        if(index_1 < index_3) cout << "13
" ;
        else if(index_3 < index_1) cout << "31
" ;
 
 
    }
}