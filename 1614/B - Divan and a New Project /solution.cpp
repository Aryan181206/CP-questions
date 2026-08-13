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
		int n ;
		cin >> n ;
		vector<int> a(n);
		//map<int,int,greater<int>> mp ;
		loop(i,0,n)
		{ 
			cin>> a[i];
			//mp[a[i]] = i ;
		}
		// take headquater at zero
		
		vector<pair<int,int>> b_m ;
		for(int i = 0 ; i<n ;i++){
			b_m.pb({a[i],i});
		}
 
		sort(b_m.rbegin(),b_m.rend());
 
		vector<int> ansarr(n+1) ;
 
		ansarr[0] = 0 ;
 
		int time = 0 ;
		int start = 1;
 
		for(int i=0;i<n;i++){
			ansarr[b_m[i].second + 1] = start ;
 
			time = time + (2*abs(start) * b_m[i].first);
 
			if(start >0){
				start = start*(-1);
			}else{
				start = abs(start) + 1;
			}
		}
 
		cout << time << endl;
		for(auto it : ansarr){
			cout << it << " ";
		}
		nl ;
	}
	
}