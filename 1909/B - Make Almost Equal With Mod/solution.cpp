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
 
bool check(ll m , vector<ll> &a){
    ll n = a.size();
    for(int i = 0 ;i<n ;i++){
        a[i] = a[i]%m ;
    }
    set<ll> st; 
    for(auto i : a){
        st.insert(i);
    }
    
    if(st.size()==2){
        return true;
    }else{
        return false ;
    }
    
}
 
 
int main(){
    fast
    test{
        ll n ;
        cin >> n ;
        vector<ll> a(n) ;
        for(ll i=0 ; i<n ;i++){
            cin >> a[i] ;
        }
        
        ll k =  2;
        
        while(true){
            
            set<ll>st;
            for(auto x : a){
                st.insert(x%k);
            }
            if(st.size() ==2){
                cout << k << endl ;
                break;
            }
            
            k = k*2;
            
        }
        
        
    }
}