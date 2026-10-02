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
        int n ; cin >> n ;
        vector<int> v(n);
        for(int i = 0 ; i<n ;i++) cin >> v[i];
        
        int ans = 0 ;
        int i = n-1;
        while(i>=0 && v[i] == v[n-1]){
            i--;
        }
        if(i == -1) {
            cout << 0 << endl;
            continue;
        }
        
        while(i>=0){
            i = i - (n-1-i);
            ans++;
            while(i>=0 && v[i] == v[n-1]){
            i--;
                
            }
        }
        cout << ans << endl ;
        
        
    }
}