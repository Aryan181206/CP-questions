#include <bits/stdc++.h>
using namespace std;
#define ll long long 
 
 
int main()
{
	int t;
	cin >> t; 
	while (t--)
	{
		ll n ; cin >> n ;
		vector<ll> a(n);
		for(ll i = 0 ; i<n ; i++){
			cin >> a[i] ;
		}
		map<ll,ll> frq ;
 
		for(ll i = 0 ; i<n ; i++ ){
			frq[a[i]]++;
		}
		ll opt = 0 ;
		ll mxfreq = -1 ;
		for(auto mx : frq){
			if(mx.second >=mxfreq){
				mxfreq = mx.second ;
			}
		}
		
		opt = opt + (n-mxfreq) ;
 
		ll clone = 0 ;
		// now how many times does it clone operation -> freq >= size
		while(mxfreq<n){
			mxfreq =mxfreq*2;
			clone++;
		}
		cout<< opt+clone << endl ; 
 
		
		
	}
}
 
 