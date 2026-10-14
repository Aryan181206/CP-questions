#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define pb push_back
#define ff first
#define ss second
#define nl cout << endl
#define all(x) (x).begin(),(x).end()
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rloop(i,a,b) for(int i=a;i>=b;i--)
#define test int t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int MOD=1e9+7;
const int INF=1e18;
const double PI=3.14159265358979323846;
const int LIMIT=3e6;
 
int main(){
    test{
        int n ; cin >> n ;
        string s ;
        cin >> s ;
        
        // to find the mEX of the given string 
        
        // check a -z 
        string ans ;
         for(char c = 'a'; c <= 'z'; c++) {
            string h(1, c);
 
            if(s.find(h) == string::npos) {
                ans = h;
                break;
            }
        }
        
        // checkiaa - zz 
         if(ans == "") {
            bool found = false;
 
            for(char c = 'a'; c <= 'z' && !found; c++) {
                for(char d = 'a'; d <= 'z'; d++) {
                    string h;
                    h.pb(c);
                    h.pb(d);
 
                    if(s.find(h) == string::npos) {
                        ans = h;
                        found = true;
                        break;
                    }
                }
            }
        }
        
        if(ans == ""){
            bool found = false ;
            for(char c = 'a' ;c<='z'&& !found ; c++){
                for(char d = 'a' ; d<='z'&& !found ;d++){
                    for(char e = 'a' ; e<='z' && !found ;e++){
                        string f ;
                        f.pb(c);
                        f.pb(d);
                        f.pb(e);
                        
                        if(s.find(f)==string::npos){
                            ans = f ;
                            found = true ;
                            break;
                        }
                    }
                }
            }
        }
        
    
        cout << ans << endl;
        
    }
}
 