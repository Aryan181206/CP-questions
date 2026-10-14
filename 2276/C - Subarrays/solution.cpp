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
        int n ,k ;
        cin >> n >>k ;
        vector<int> a(n) ;
        for(int i = 0 ; i<n;i++) cin >>a[i] ;
        
        vector<int>pref(n+1,0);
        for(int i =1 ;i<=n ;i++){
            pref[i] = (pref[i-1] + a[i-1])%k;
        }
        vector<ll>freq(k,0);
        ll ans = 0 ;
        
        for(int i = k+1 ; i<=n ;i++){
            freq[pref[i-k-1]]++;
            ans += freq[pref[i]];
        }
        cout << ans << endl;
    }
}
 
 
 