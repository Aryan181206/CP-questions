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
   
   test{
       int n,k,s,t ;
       cin>> n>>k>>s>>t;
       
       vector<int> x(n+1),y(n+1);
       
       for(int i=1 ; i<=n ;i++){
           cin >> x[i] >>y[i] ;
       }
       
       int ans = abs(x[s]-x[t]) + abs(y[s]-y[t]);
       int mins =1e18 ,mint = 1e18 ;
       
       for(int i =1 ; i<=k;i++){
           mins = min(mins,abs(x[s]-x[i])+abs(y[s]-y[i]));
           mint = min(mint,abs(x[t]-x[i])+abs(y[t]-y[i]));
       }
       ans =min(ans,mins+mint);
       cout << ans << endl;
       
   }
}