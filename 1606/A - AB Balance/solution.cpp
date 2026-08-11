#include <bits/stdc++.h>
using namespace std;
#define ll long long 
 
 
int main()
{
	ll t;
	cin >> t; 
	while (t--)
	{
		string s ;
		cin >> s;
		if(s[0] == s[s.size()-1]){
			cout << s << endl;
		}
		else{
			if(s[0]=='a'){
				s[0]='b';
			}else{
				s[0]='a';
			}
			cout<<s <<endl;
		}
	}
}
 
 