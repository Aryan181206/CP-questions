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
    
    int r, s, p;
    cin >> r >> s >> p;
 
    int n = r+s+p;
    string ans(n,'R');
    
    if(s>=p){
        cout << string(n,'R') << endl;
    }
    else if(p>=r){
        cout << string(n,'S') << endl;
        
    }
    else{
        cout << string(n,'P') << endl;
    }
}
 
int main(){
    test{
        solve();
    }
}
 