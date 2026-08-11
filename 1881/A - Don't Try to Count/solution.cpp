#include<bits/stdc++.h>
using namespace std;
 
int check(string a ,string b){
    if(a.find(b) != string::npos){
        return 1;
    }
    else{
        return 0;
    }
}
 
int main(){
    int t ; cin >> t ;
    while(t--){
        int n , m ; cin >> n >> m ;
        string x , s ;
        cin >> x ; 
        cin >> s ;
        
        string x0 = x ;
        string x1 = x0 + x0 ;
        string x2 = x1 + x1 ;
        string x3 = x2 + x2 ;
        string x4 = x3 + x3 ;
        string x5 = x4 + x4 ;
 
        int ans = -1 ;
        if(check(x0 , s)){
            ans = 0;
        }
        else if(check(x1 , s)){
            ans = 1;
        }
        else if(check(x2 , s)){
            ans = 2;
        }
        else if(check(x3 , s)){
            ans = 3;
        }
        else if(check(x4 , s)){
            ans = 4;
        }
        else if(check(x5 , s)){
            ans = 5;
        }
 
        cout << ans << endl ;
        
    }
}