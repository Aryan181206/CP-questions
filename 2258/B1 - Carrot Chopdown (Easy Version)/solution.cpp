#include<bits/stdc++.h>
using namespace std;
#define int long long
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
 
 
int32_t main(){
    fast
    test{
        int n , m;
        cin >> n >> m;
        
        vector<int>freq(m+1,0);
        for(int i = 0 ; i<n ; i++){
           int x ;
           cin>> x ;
           freq[x]++;
        }
        
        int ans = 0 ;
        
        // carrot len = x ;
        
        vector<int> suffix(m+2,0);
        
        for (int i = m; i >= 1; i--) {
        suffix[i] = suffix[i+1] + freq[i];
            
        }
        
        for(int x = 1 ; x<=m ;x++){
            ans = max(ans,suffix[x]);
            
            if(2*x <=m){
                ans =max(ans,suffix[x]+freq[2*x]);
            }
        }
        
        int mx1 = 0 ;
        int mx2 = 0 ;
        
        for(int i=1 ; i<=m ; i++){
            if(freq[i]>mx1){
                mx2 = mx1 ;
                mx1 = freq[i];
            }
            else if(freq[i]>mx2){
                mx2 = freq[i];
            }
        }
        
        ans = max(ans,mx1+mx2);
        
        cout << ans ;
        nl;
        
        
        
        
    }
 
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 