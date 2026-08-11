#include <bits/stdc++.h>
using namespace std;
#define ll long long 
 
 
 
int main()
{
	
	ll t;
	cin >> t; 
	while (t--)
	{
		ll a , b ;
		cin>> a>> b ;
 
 
		if(a==b){
			cout << 0 << " " << 0 <<endl ;
		}
		else{
			ll g = abs(a-b);
		ll stpes = min(b%g,g-(b%g));
 
		cout << g << " " << stpes << endl;
		}
		
 
 
		
}
		
 
		
	}
 
 
 