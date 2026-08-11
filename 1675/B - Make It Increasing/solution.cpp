#include <bits/stdc++.h>
using namespace std;
#define ll long long 
 
int main()
{
	int t;
	cin >> t; 
	while (t--)
	{
		int n ; cin >> n ;
		vector<ll> a(n) ;
		for(int i = 0 ; i < n ; i++){
			cin >> a[i] ;
			
		}
		// bool double = false ;
		// for(ll i = 0 ; i<L ;i++){
		// 	if(hash[i]>=2){
		// 		double = true;
		// 		break;
		// 	}
		// }
		ll ans = 0 ;
		// if(double==true){
		// 	//element same hai strictly inc nahi banpayega
		// 	cout<< -1 << endl ; 
		// }else{
			
			for(ll i = n-2 ; i>=0 ; i--){
				while(a[i]>=a[i+1]){
					//cout << a[i] << " " << a[i+1] << endl;
					a[i] = a[i]/2 ;
					ans++;
					if(a[i]==0) break;
				}
				if(a[i]==0 && a[i+1]==0){
					ans = -1;
					break;
				}
			}
		
		cout << ans << endl;
		
 
 
		
	}
}
 
 