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
	fast;
	test{
		string s;
		string t ;
		cin >> s ;
		cin >> t ;
		int ans = 0 ;
		int n = s.size();
		int m = t.size();
		vector<vector<int>> dp(n+1,vector<int>(m+1,0));
		
		for(int j =0 ; j<=m ; j++) dp[0][j] = 0 ;
		for(int i = 0 ; i<=n ;i++) dp[i][0] = 0 ;
		for(int i = 1 ; i<=n;i++){
			for(int j = 1 ; j<=m ;j++){
				if(s[i-1] == t[j-1]){
					dp[i][j] = 1 + dp[i-1][j-1];
					ans = max(ans,dp[i][j]);
				}
				else dp[i][j] = 0 ;
			}
		}
		// longest common substrnig = ans
		int op = n+m - 2*ans ;
		cout << op << endl ;
 
		
	}
	
}