#include <bits/stdc++.h>
using namespace std;
#define ll long long 
 
int hsh[27];// 1 based
int main()
{
	int t;
	cin >> t; 
	while (t--)
	{
		int hsh[27] = {0};// 1 based
		string s ;
		string t ;
		cin >> s >> t;
		int n = s.size();
		
	
		for(int i = 0 ; i<t.size() ; i++){
			hsh[t[i]-'A'+1]++;
		}
		
 
		for(int i = n-1 ; i>=0 ;i--){
			if(hsh[s[i]-'A'+1]>0){
				hsh[s[i]-'A'+1]--;
			}else{
				s[i] = '.' ;
			}
		}
 
		string ans ;
		for(char ch : s){
			if(ch!='.'){
				ans.push_back(ch);
			}
		}
		if(ans==t){
			cout<< "YES" << endl;
		}else{
			cout<< "NO" <<endl ;
		}
		
 
		
		
		
	}
}
 
 