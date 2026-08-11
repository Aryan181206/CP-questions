#include <bits/stdc++.h>
using namespace std;
#define ll long long 
 
 
 
int main()
{
	ll t;
	cin >> t; 
	while (t--)
	{
		int n ; cin >> n ;
		vector<ll> a(n) ;
		ll ones = 0;
		ll zeros = 0 ;
		for(int i = 0 ; i<n ;i++){
			cin >> a[i] ;
			if(a[i]==0){
				zeros++;
			}else if(a[i]==1){
				ones++;
			}
		}
		auto it = find(a.begin(),a.end(),0) ;
		auto it1 = find(a.begin(),a.end(),1) ;
 
		if(it != a.end()){
			// zero is found
			if(it1!=a.end()){
				// 1 is presnt 
				// 1 and 0 both presernt
				ll ways = pow(2,zeros) * ones ;
				cout << ways<< endl;
			}else{
				// 1 is not present 
				// 0 is present 
				cout << 0 << endl;
			}
		}
		else{
			// no zeros
			if(it1!=a.end()){
				// 1 is presernt
				//count of subseq  will be no of 1s 
				cout << ones << endl;
			}else{
				// no 1 and no 0
				cout << 0 <<endl ;
			}
			
		}
 
	}
}
 
 