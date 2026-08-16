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
		int a , b ;
		cin >>a >>b;
 
		int ans = LLONG_MAX ;
 
		int op = 0 ;
		for(int add = 0 ; add < 32 ; add++){
			int oper = add ;
			int newb = b + add ;
			if(newb ==1) continue;
			int copya = a ;
			while(copya>0){
				copya /= newb ;
				oper++;
			}
			ans = min(ans,oper);
		}
 
		cout << ans << endl ;
	}
	
}