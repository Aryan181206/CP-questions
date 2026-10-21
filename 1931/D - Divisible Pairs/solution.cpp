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
        int n , x , y ;
        cin >> n >> x >>y ;
        vector<int>a(n);
        map<int,vector<int>>mp;
        loop(i,0,n)
        {
            cin >> a[i];
            mp[a[i]%y].pb(a[i]);
        }
        
        ll ans = 0 ;
        for(auto it : mp){
            vector<int>v = it.ss;
            map<ll,ll> mp1;
            for(int i = 0 ; i<v.size() ;i++){
                mp1[v[i]%x]++;
            }
            
            for(auto it : mp1){
                if(it.ff == 0 || (it.ff == x/2 and x%2==0)){
                    ll cnt = it.ss;
                    ans += (cnt*(cnt-1))/2;
                    it.ss = 0 ;
                }else{
                    ll cnt1 = it.ss;
                    ll cnt2 = mp1[x-it.ff];
                    ans+= cnt1*cnt2;
                    mp1[x-it.ff] = 0 ;
                }
            }
            
        }
        cout<< ans << endl;
        
    }
}