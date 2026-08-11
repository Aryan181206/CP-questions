#include <bits/stdc++.h>
using namespace std;
#define ll long long 
 
 
int main()
{
	ll t;
	cin >> t; 
	while (t--)
	{
		ll x0 , n ;
		cin >> x0 >> n ;
		ll fp ;
		if(n%4==0) fp =  0 ;
		else if(n%4==1) fp = -1*n;
		else if(n%4==2) fp = 1;
		else if(n%4==3) fp = n+1;
 
		if(x0%2==0){
			fp = x0 + fp;
		}else{
			fp = x0 - fp ;
		}
		cout << fp << endl ;
	}
}
 
 