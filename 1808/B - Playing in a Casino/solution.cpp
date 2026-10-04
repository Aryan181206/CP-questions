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
   test{
       int n , m ;
       cin >>n >> m;
       
       vector<vector<ll>> v(m,vector<ll>(n)) ; // store rotated matrix
       
       // taking input ulta like row to col and col to row
       for(int j = 0 ; j<n ;j++){
           for(int i = 0 ; i<m ;i++){
               cin >> v[i][j] ;
           }
       }
       
       for(int i = 0 ; i<m ;i++){
           sort(v[i].begin(),v[i].end());
       }
       
       ll ans = 0 ;
       
       for(int i = 0 ; i<m ;i++){
           for(int j = 0 ; j<n ;j++){
               ans = ans - (v[i][j] * (n-j-1));
               ans = ans + (v[i][j] * j);
           }
       }
       
       cout << ans << endl;
       
   }
}