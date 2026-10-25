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
const int MOD=998244353;
const int INF=1e18;
const double PI=3.14159265358979323846;
const int LIMIT=3e6;
 
int main(){
    test{
        string s ;
        cin >> s ;
        int n =s.size();
        ll ans =1 ;
        int ansLen = 1 ;
        int cur = 1 ;
        for(int i = 1 ; i<n ;i++ ){
            if(s[i]!= s[i-1]){
                ansLen++;
                ans = (ans*cur)%MOD;
                cur = 1;
                
            }else{
                cur++;
            }
        }
        ans = (ans*cur)%MOD;
        for(int i = 1 ; i<=n-ansLen;i++){
            ans = (ans*i)%MOD;
        }
        cout << n-ansLen << " " << ans << endl;
        
        
    }
}