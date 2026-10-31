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
void solve() {
    int n ;
    cin >> n ;
    vector<int>a(n);
    int sum = 0 ;
    loop(i,0,n){
        cin >> a[i] ;
        sum += a[i] ;
    }
    
    if(sum == n){
        cout << -1 << endl;
        return;
    }
    bool ok = false ;
    for(int i = 1; i<n-1 ;i++){
        if(a[i]>1){
            ok = true;
            break;
        }
    }
    if(ok){
        cout << sum - 1 << endl;
    }else{
        cout << sum - (n-1) << endl;
    }
}
 
int main(){
    test{
        solve();
    }
}
 