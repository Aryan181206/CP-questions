#include <bits/stdc++.h>
using namespace std;
 
#define ll long long 
 
 
int main() {
    int t ;
    cin >> t ;
    while(t--){
        int n ;
        cin >> n ;
        char c ;
        cin >> c ;
        string s ;
        cin >> s ;
        
        bool same = true;
        
        for(char ch:s){
            if(ch!=c){
                same = false;
                break;
            }
        }
        
        if(same){
            cout << 0 << endl ;
            continue;
        }
        
        int val = -1 ;
        for(int i =2 ; i<=n;i++){
            bool ispass = true;
            for(int j = i ;j<=n ;j+=i){
                if(s[j-1]!=c){
                    ispass = false;
                    break;
                }
            }
            
            if(ispass){
                val = i ;
                break;
            }
        }
        
        if(val!=-1){
            cout << 1 << endl;
            cout << val << endl ;
            continue;
        }else{
            
        cout << 2 << endl ;
        cout << n-1 << " " << n << endl ;
        
        }
        
        
        
        
    }
}