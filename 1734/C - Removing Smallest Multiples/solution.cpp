#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
int main() {
	int t ;
	cin >> t ;
	while(t--){
	    int n ;
	    cin >> n ;
	    string s ;
	    cin >> s ;
	    ll ans = 0 ;
	    
	    vector<bool> isRemoved(n+1,false) ; // store the element is removed or not
	    
	    for(int i = 1 ; i<=n ; i++){
	        for(int j =i ; j<=n ; j+=i){
	            
	            if(s[j-1] == '1'){
	                break;
	            }
	            
	            if(isRemoved[j]){
	                continue;
	            }
	            else{
	                isRemoved[j] = true;
	                ans = ans + i; 
	            }
	        }
	    }
	    
	    cout << ans << endl ;
	    
	    
	    
	    
	}
 
}