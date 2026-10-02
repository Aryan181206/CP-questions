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
    fast 
    
        int n ; 
        int q ;
        cin >> n ;
        cin >> q ;
        
        vector<int>fp(51,n+1);
        for(int i =1 ; i<=n;i++){
            int c ;
            cin >> c ;
            if(fp[c]==n+1){
                fp[c]=i;
            }
        }
        
        while(q--){
            int c ;
            cin >> c ;
            int ans = fp[c];
            for(int i = 1; i<=50;i++){
                if(fp[i]<ans){
                    fp[i]++;
                }
            }
            fp[c] = 1 ;
            cout << ans << " ";
        }
       
    
     cout << endl;
    
}