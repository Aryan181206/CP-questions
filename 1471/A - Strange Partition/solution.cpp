#include <bits/stdc++.h>
using namespace std;
#define ll long long 
 
 
 
int main()
{
	
	ll t;
	cin >> t; 
	while (t--)
	{
		ll n ,x ; cin >>n >> x ;
		vector<ll> a(n);
		for(ll i = 0 ; i<n ; i++){
			cin >> a[i] ;
		}
		ll maxbeauty = 0;
		//ll sum = accumulate(a.begin(),a.end(),0);
		ll minbeauty = 0;
		for(ll i = 0 ; i<n ;i++ ){
			maxbeauty = maxbeauty +((a[i]+x-1)/x) ; // round up;
 
			minbeauty = minbeauty + a[i] ;
		}
		minbeauty= (minbeauty+x-1)/x;
		cout <<minbeauty << " " <<maxbeauty << endl;
	}
	
		
 
}
 
 
 