#include<bits/stdc++.h>
using namespace std;
 
int main(){
   int n ; cin >> n ;
   string s ; cin >> s ;
   int keys_buy = 0 ;
   vector<char> useable_key ;
   for(int i = 0 ; i< s.size() ; i = i+2){
    // odds pos - >  keys lower  0 2 4 
    // even pos -> door upper    1 3 5
        //if(s[i] != tolower(s[i+1])){
 
            useable_key.push_back(s[i]);
 
            auto it = find(useable_key.begin() , useable_key.end() , tolower((s[i+1])));
            if(it != useable_key.end()){
                useable_key.erase(it);
            }else{
                keys_buy = keys_buy + 1 ;
                
            }   
            
        //}
   }
    cout << keys_buy << endl ;
}