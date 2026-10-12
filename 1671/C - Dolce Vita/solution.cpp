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
#include <bits/stdc++.h>
using namespace std;
 
 
int main() {
    test{
        int n;
        ll x;
        cin >> n >> x;
        vector<ll> a(n);
 
        loop(i,0,n) cin >> a[i];
 
        sort(all(a));
 
        ll sum = 0;
        ll ans = 0;
        for (int i = 0; i < n; i++) {
            sum += a[i];
            if (sum > x)
                break;
            ll k = i + 1;
            ll days = (x - sum) / k + 1;
            ans += days;
        }
        cout << ans << '
';
    }
}
 