#include <bits/stdc++.h>
using namespace std;
#define ll long long 
 
 
bool isSet(long long n, int i) {
    return (n & (1LL << i)) != 0;
}
 
int main()
{
	ll t;
	cin >> t; 
	while (t--)
	{
		int n ; cin >> n ;
		vector<ll> a(n) ;
		for(int i = 0 ; i < n ; i++){
			cin >> a[i] ;
		}
 
		int ans  = a[0] ;
		for (int i = 1; i < n; i++) {
			ans = ans & a[i] ;
			
    }
	cout << ans << endl ;
}
		
 
		
	}
 
 
 