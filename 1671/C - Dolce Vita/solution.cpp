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
 
bool pf(ll val , ll ind , ll x ,ll mid){
    if(val + (1LL * (ind+1)*(mid-1))<=x) {
        return true;
    }
    return false;
}
 
int binSearch(ll val , ll ind , ll x){
    ll low = 1 ;
    ll high = 1e9+5;
    
    ll ans = 0 ;
    while(low<=high){
        ll mid = (low+high)/2;
        if(pf(val,ind,x,mid)){
            ans = mid ;
            low = mid +1 ;
        }else{
            high = mid -1 ;
        }
    }
    return ans ;
}
 
int main(){
    test
    {
        ll n ,x ;
        cin >> n >> x ;
        vector<ll> a(n);
        loop(i,0,n) cin >> a[i] ;
        
        sort(all(a));
        
        vector<ll> presum(n);
        
        presum[0] = a[0];
        
        loop(i,1,n){
            presum[i] = presum[i-1] + a[i];
        }
        
        ll bags = 0 ; 
        for(ll i = 0 ; i<n ;i++){
            
            bags+= binSearch(presum[i],i,x);
        }
        
        cout << bags << endl ;
        
        
        
        
        
        
        
        
        
        
        
    }
    
}
 