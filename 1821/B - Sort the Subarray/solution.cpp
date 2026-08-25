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
        int n ; cin >> n ;
        vector<int> a(n);
        vector<int> b(n);
        for(int i = 0 ; i<n ;i++){
            cin >>a[i] ;
        }
        for(int i = 0 ; i<n ;i++){
            cin>>b[i];
        }
        
        // from left
        int l = 0;
        while(l < n && a[l] == b[l]){
            l++;
        }
        
        // cout << l ;
        // nl;
        
        // from right
        int r = n - 1;
        while(r >= 0 && a[r] == b[r]){
            r--;
        }
        
        // cout << r ;
        
        // extend left
       while(l > 0 && b[l] >= b[l-1]){
            l--;
        }
        
        // right extend 
       while(r + 1 < n && b[r] <= b[r+1]){
            r++;
        }
        
        cout << l+1 << " " <<r+1 << endl ;
        
        
        
    }
}