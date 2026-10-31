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
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie;
const int MOD=998244353;
const int INF=1e18;
const double PI=3.14159265358979323846;
const int LIMIT=3e6;
 
void solve(){
    
        int n , m ;
        cin >> n >> m ;
        string p ;
        string q ;
        cin >> p >> q ;
        
        int frq[26] = {0};
        
        for(char c : p){
            frq[c-'a']++;
        }
        
        for(char c : q){
            frq[c-'a']--;
        }
        int tar[26] = {0};
        tar['s'-'a'] = 1;
        tar['i'-'a']=1;
        tar['x'-'a'] = 1;
        
        for(int i = 0 ; i<26 ;i++){
            if(frq[i]!=tar[i]){
                cout << "NO" << endl;
                return;
            }
        }
        cout << "YES" << endl;
    
}
 
int main(){
    test{
        solve();
    }
}
 