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
        int a , b ;
        cin >> a >> b ;
        
        int ra = a ;
        int rb = b ;
        while(ra%2==0) ra /= 2;
        while(rb%2==0) rb /= 2;
        
        if(ra != rb) cout << -1 << endl;
        else{
            a = a/ra ;
            b = b/ra ;
            int x = log2(a);
            int y = log2(b);
            int ans = ceil(abs(x-y) / 3.0);
            
            cout << ans << endl ;
        }
        
        
    }
}