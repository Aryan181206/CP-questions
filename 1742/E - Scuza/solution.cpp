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
 
 
int32_t main(){
   fast
   test{
       int n , q ;
       cin >> n >> q ;
       vector<ll>a(n);
       
       for(int i =  0 ; i<n ;i++){
           cin >> a[i];
       }
       //1 2 1 5
       vector<ll>k(q);
       for(int i = 0 ;i<q ;i++){
           cin >> k[i];
       }
       
       vector<ll> pmax(n);
       vector<ll> psum(n);
       pmax[0] = a[0];
       psum[0] = a[0];
       
       for(int i = 1 ;i<n ;i++){
           pmax[i] = max(pmax[i-1],a[i]);
           psum[i] = psum[i-1] + a[i];
       }
       
       for(int i = 0 ; i<q ; i++){
           int val = k[i];
           int ind = upper_bound(pmax.begin(), pmax.end(), val) - pmax.begin();
           ind--;
           if(ind == -1){
               cout << 0 << " ";
           }
           else{
               cout << psum[ind] << " ";
           }
       }
       
       cout << endl;
       
      
       
   }
}