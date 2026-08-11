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
		ll maxx = 0 ;
		ll minn = 0 ;
		if(n%2!=0 || n<4){
			//odd
			cout << -1 << endl;
		}else{
			// even
			minn = (n+5)/6;
			maxx = n/4;
			cout <<  minn << " " << maxx << endl ;
		}
 
		
	}
}
 
 