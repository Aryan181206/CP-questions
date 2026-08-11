#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
int main()
{
    ll t;
    cin >> t;
 
    while (t--)
    {
        ll n , r, b ;
        cin >> n >> r >> b ;
 
        ll r_len = r/(b+1) ;
        ll extra = r%(b+1) ;
 
        string s ;
 
        for(ll t = 1 ; t <=b+1 ; t++){
            for(ll i = 1; i<=r_len ; i++){
                s.push_back('R');  
            }
            if(extra>0){
                s.push_back('R');
                extra--;
            }
            if(t != b+1){
                s.push_back('B');
            }
 
        }
 
        for(char c : s){
            cout << c ;
        }
        cout << endl;
        
 
 
 
        
 
    }
 
}