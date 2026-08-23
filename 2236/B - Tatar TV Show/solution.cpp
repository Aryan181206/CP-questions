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
       int n,k ;
       cin >> n >> k;
       string s;
       cin >>s ;
       
       for(int i=0 ;i<n;i++){
           if(i+k>=n)break;
           if(s[i]=='1'){
               s[i]='0';
               if(s[i+k]=='0') s[i+k] = '1';
               else s[i+k] = '0';
           }
       }
       bool ans = true;
       for(char c : s) if(c=='1') ans= false;
           if(ans) cout <<"YES" <<endl;
        else cout << "NO" <<endl;
      
   }
}