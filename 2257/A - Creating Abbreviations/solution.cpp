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
 
		int n , m ;
		cin >> n >> m ;
		
 
		bool have[26] = {};
 
        for (int i = 0; i < n; i++) {
            string s;
            cin >> s;
            have[s[0] - 'a'] = true;
        }
 
		vector<string> a(m);
		for(auto &s : a){
			cin>>s;
		}
 
		
 
		int done =0 ;
 
		while(done<m){
			bool pro = false;
 
			for(int i = 0; i<m ;i++){
				if(a[i].empty()) continue;
 
				bool can = true ;
				for(char c: a[i]){
					if(!have[c-'A']){
						can = false ;
						break;
					}
				}
				if(can){
					have[a[i][0] - 'A'] = true;
					a[i].clear();
					done++;
					pro = true;
				}
				}
				if(!pro) break;
			}
 
			if(done==m){
				yes;
			}
			else{
				no;
			}
		}
 
		
 
 
 
		
		
	}
	