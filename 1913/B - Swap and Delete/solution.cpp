#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while (t--){
        string s ;
        cin >> s;
        // cost to make string good;
        ll ones = 0 ;
        ll zeros = 0 ;
        
        ll ts = 0;
        for(ll i=0 ; i<s.size() ;i++ ){
            if(s[i]=='1') ones++;
            else zeros++;
        }
 
        for(ll i=0 ; i<s.size() ;i++ ){
            if(s[i]=='0' && ones>0)  {
               ones--;  ts++;
            }
 
            else if(s[i]=='1' && zeros>0){
                zeros-- ; ts++;
            }
            else{
                break;
            }
        }
        ll deletions = s.size() - ts ;
 
        cout << deletions << endl;
        
    }
}