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
       ll n ;
       cin >> n;
       vector<ll> a(n);
       for(ll i = 0 ; i<n ;i++){
           cin >> a[i] ;
       }
       sort(a.begin(),a.end());
      
       map<ll,ll> freqmp;
       for(int i = 0 ;i<n ;i++){
           freqmp[a[i]]++;
       }
       
        ll mxfre = 0 ; 
        
        for(auto &[ele,fre] : freqmp){
            mxfre += max(0LL,freqmp[ele]-freqmp[ele-1]);
        }
        
        cout << mxfre << endl; ;
       
   }
}