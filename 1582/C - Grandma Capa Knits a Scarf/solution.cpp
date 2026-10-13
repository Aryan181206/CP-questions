#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define pb push_back
#define ff first
#define ss second
#define nl cout << endl
#define all(x) (x).begin(),(x).end()
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rloop(i,a,b) for(int i=a;i>=b;i--)
#define test int t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int MOD=1e9+7;
const int INF=1e18;
const double PI=3.14159265358979323846;
const int LIMIT=3e6;
 
 
 
int main(){
    test{
        int n ; 
        cin >> n ;
        string s ;
        cin >> s ;
        
        int ans = INT_MAX;
        
        char c = 'a';
        for(char c = 'a' ; c<='z' ; c++){
            
            int tmp = 0 ;
            bool isposs = true;
            
             int i = 0 ; 
             int j = n-1;
             
             while(i<j){
                 if(s[i]==s[j]){
                     i++;
                     j--;
                     continue;
                 }
                 else if(s[i]!=s[j] && (s[i]!=c) && s[j]!=c){
                     isposs = false;
                     break;
                 }
                 else{
                     if(s[i]==c){
                         tmp++;
                         i++;
                         
                     }
                     else if(s[j]==c){
                         tmp++;
                         j--;
                     }
                 }
             }
             if(!isposs){
                 tmp = INT_MAX ;
             }
             
             ans= min(tmp,ans) ;
            
        }
        
        if(ans == INT_MAX){
            cout << -1 << endl;
        }else{
            cout << ans << endl;
        }
        
        
        
        
        
        
        
    }
}