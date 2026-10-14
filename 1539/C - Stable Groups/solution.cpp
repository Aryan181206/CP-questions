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
    
    ll n , k ,x ;
    cin >> n >> k >> x ;
    
    vector<ll> v(n);
    
    for(int i = 0; i <n ; i++){
        cin >> v[i];
    }
    sort(all(v));
    
    vector<ll> diff ;
    
    for(int i = 0 ; i<n-1 ;i++){
        if(v[i+1] - v[i] >x){
            diff.pb(v[i+1] - v[i]);
        }
    }
    
    sort(all(diff));
    
    int ans = diff.size() + 1 ;
    
    for(auto dif : diff){
        
        ll val = (dif/x) + (dif%x!=0) - 1 ; // ceil divison
        
        if(k>=val){
            ans--;
            k -= val ;
        }
    }
    
    cout << ans << endl ;
 
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 