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
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie;
const int MOD=998244353;
const int INF=1e18;
const double PI=3.14159265358979323846;
const int LIMIT=3e6;
 
bool check(vector<ll> &a , int n , int x , ll k){
    vector<ll> iso;
    for(int i = 0 ;i<n ;i++){
        bool safe = false;
        
        if(i>0 && a[i]-a[i-1]<=k){
            safe = true;
        }
        if(i+1<n && a[i+1]-a[i]<=k){
            safe = true;
        }
        
        if(!safe){
            iso.pb(a[i]);
        }
    }
    
    int ex = 0 ;
    int m = iso.size();
    
    for(int i = 0 ; i<m ;){
        ex++;
        ll limit = iso[i] + 2*k ;
        
        while(i<m && iso[i]<=limit){
            i++;
        }
    }
    return ex<=x;
}
 
int main(){
    test{
        int n ;
        int x ;
        cin >> n >> x ;
        vector<ll> a(n);
        loop(i,0,n) cin>>a[i] ;
        
        ll lo = 1 ;
        ll hi = a[n-1]-a[0];
        ll ans = hi ;
        
        while(lo<=hi){
            ll mid = (hi+lo) /2;
            if(check(a,n,x,mid)){
                ans = mid;
                hi = mid-1;
            }else{
                lo =mid+1 ;
                
            }
        }
        
        cout << ans << endl;
        
        
        
    }
    
}