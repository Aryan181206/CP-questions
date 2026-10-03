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
       
       int n , k ;
       cin >> n >>  k;
       vector<int> v(n);
       for(int i = 0 ; i<n ;i++){
           cin >> v[i];
       }
       
       vector<int> colors[k+1];
       
       for(int i = 1 ; i<=k ;i++){
           colors[i].pb(0);
       }
       
       for(int i = 0 ; i<n ;i++){
           colors[v[i]].pb(i+1);
       }
       
       for(int i = 1 ; i<=k ;i++){
           colors[i].pb(n+1);
       }
       
       priority_queue<int> jumps[k+1];
       int ans = INT_MAX ;
       
       for(int i =1 ; i<=k ;i++){
           for(int j = 0 ; j<colors[i].size()-1 ;j++){
               
               jumps[i].push(colors[i][j+1] - colors[i][j] - 1) ;
           }
           
           int max_val = jumps[i].top();
           
           jumps[i].pop();
           
           if(max_val%2==0){
               jumps[i].push(max_val/2);
               jumps[i].push((max_val/2)-1);
           }
           else{
               jumps[i].push(max_val/2);
               jumps[i].push(max_val/2);
           }
           ans = min(ans,jumps[i].top());
       }
       
       cout << ans<< endl;
       
       
       
    }
}