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
      int n;
      cin >> n ;
      vector<pair<int,int>>a(n), b(n) ,c(n);
      
      for(int i = 0 ; i<n ; i++){
          cin >>a[i].first;
          a[i].second = i ;
      }
      
      for(int i = 0 ; i<n ;i++){
          cin >> b[i].first;
          b[i].second = i ;
      }
      
      for(int i = 0 ; i<n ;i++){
          cin >> c[i].first;
          c[i].second = i ;
      }
      
        sort(a.rbegin(), a.rend());
        sort(b.rbegin(), b.rend());
        sort(c.rbegin(), c.rend());
      
      int ans = 0 ;
      
      
      for(int i = 0 ; i<3 ; i++){
          for(int j = 0 ; j<3 ;j++){
              for(int k = 0 ; k<3 ; k++){
                  
                  int x = a[i].second;
                  int y = b[j].second;
                  int z = c[k].second;
                   
                  if(x!=y && y!=z && z!=x){
                      ans = max(ans,a[i].ff+b[j].ff+c[k].ff);
                  }
              }
          }
      }
      
      cout << ans << endl ;
      
  }
}