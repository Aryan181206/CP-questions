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
        ll n ; cin >> n ;
        vector<pair<ll,ll>> a;
        for(int i = 0 ; i<n ;i++){
            int x ;
            cin >> x ;
            a.push_back({x,i+1});
        }
        
        sort(a.begin(), a.end());
        ll pairs = 0 ;
       
        
        for(ll i = 0 ; i<n ;i++){
            for(ll j = i+1 ;j<n ;j++){
                ll mul = (a[i].ff)*(a[j].ff) ;
                ll add = (a[i].ss) + (a[j].ss) ;
                if(mul >= 2*n){
                    break ;
                }
                if(mul == add){
                    pairs++;
                }
            }
        }
        
        cout << pairs<< endl ;
        
        
        // for(auto p :a){
        //     cout << p.first << " " << p.ss << endl ;
        // }
       
        
 
        
        
        
    }
}