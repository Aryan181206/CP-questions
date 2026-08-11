#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
int main()
{
 
    ll t;
    cin >> t;
    while (t--)
    {
        ll n ; cin >> n ;
        char c ; cin >> c ;
        string s ;
        cin >> s ;
        s = s+s;
 
        ll ind_g = -1 ;
 
        ll diff = LLONG_MIN ; // maximize this diff
 
        for (ll i = 2*n -1; i >= 0; i--)
        {
            if(s[i]=='g'){
                ind_g = i ;
            }
            if(s[i] == c && ind_g!=-1){
                diff  = max(diff,abs(ind_g-i));
            }
            
        }
 
        cout << diff << endl ;
        
 
    }
}