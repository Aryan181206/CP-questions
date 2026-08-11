#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    int t; cin >> t ;
    while (t--){
        ll n ; cin>>n ;
        string s ;
        cin >> s ;
        // consecutive common sequence ko find
        //count and reset technique
        int ct = 1 ;
        int ans = 1 ;
        for (int i = 0; i < s.size()-1; i++)
        {
            if((s[i] == '<' && s[i+1] == '<') ||(s[i] == '>' && s[i+1] == '>') ){
                ct++;
            }else{
                ct =1;
            }
            ans =max(ans,ct) ;
        }
 
        cout << ans +1 << endl;
        
    }
 
    
    return 0;
}