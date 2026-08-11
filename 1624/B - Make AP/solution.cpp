#include <bits/stdc++.h>
using namespace std;
#define ll long long 
 
 
int main()
{
	int t;
	cin >> t; 
	while (t--)
	{
		ll a,b, c ;
		cin>> a>> b >> c ;
 
		ll m1 = (2*b - c )/a ;
		ll m2 = (a+c)/(2*b) ;
		ll m3 = (2*b-a)/c ;
 
		if((m1>0 && (2*b - c )%a==0) || (m2>0 && (a+c)%(2*b)==0) || m3>0 && (2*b - a)%c==0)
		{
			cout << "YES" << endl ;
		}
		else
		{
			cout << "NO" << endl ;
		}
 
		
		
	}
}
 
 