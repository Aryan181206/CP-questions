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
    fast
    test{
        int n ; 
        cin >> n ;
        
        vector<int> a(n);
        for(int i = 0 ; i<n;i++){
            cin >> a[i];
        }
    
        cout << __gcd(a[0],a[n-1]) << endl ;
        
        
    }
 
}
 
 
 
 