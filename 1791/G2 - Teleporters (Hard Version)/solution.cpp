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
        int c ; cin >> c ;
        
        vector<pair<int,int>> a;
        
        for(int i=0;i<n;i++){
            int x ;
            cin>>x;
            a.pb({x+min(i+1,n-i),x+i+1});
        }
        sort(all(a));
        
        vector<int>pref;
        pref.pb(0);
        
        for(int i = 0 ;i<n ;i++){
            pref.pb(pref.back() + a[i].ff);
        }
        int ans = 0 ;
        for(int i = 0 ;i<n ;i++){
            int new_c = c- a[i].ss;
            int l = 0 , r = n ;
            int mx = 0 ;
            while(l<=r){
                int mid = (l+r)/2;
                
                int price  = pref[mid];
                int now = mid+1;
                if(mid>i){
                    price -=a[i].ff;
                    now--;
                }
                if(price<=new_c){
                    mx = max(now,mx);
                    l = mid+1;
                }
                else{
                    r = mid-1;
                }
            }
            
            ans = max(ans,mx);
        }
        cout << ans << endl;
        
 
    }
}