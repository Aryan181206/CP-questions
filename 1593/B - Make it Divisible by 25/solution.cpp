#include <bits/stdc++.h>
using namespace std;
#define ll long long 
 
 
int oper(string n , string pv){
	int op = 0 ;
	int check_Ind = pv.size()-1;
	for(int i=n.size()-1;i>=0;i--){
		if(n[i]==pv[check_Ind]){
			check_Ind--;
			if(check_Ind<0) break;
		}else{
			op++;
		}
	}
	if(check_Ind>=0){
		op = INT_MAX ;
	}
	return op;
}
 
 
int main()
{
	ll t;
	cin >> t; 
	while (t--)
	{
		string s ;
		cin >> s;
		vector<string> poss = {"00","25","50","75"} ;
		int ans = INT_MAX ;
		for(auto pv : poss){
			ans= min(ans,oper(s,pv));
		}
		cout << ans << endl; 
	}
}
 
 