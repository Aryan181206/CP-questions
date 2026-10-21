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
    string s ;
    cin >> s ;
    int n = s.size();
    vector<char>ans(n) ;
    ans[0] = s[0];
    for(int i = 1 ; i<n ;i++){
        if(s[i] == ans[i-1]){
            for(char j = 'a' ; j<='z' ;j++){
                if(j!=s[i-1]){
                    if(i<n-1 and j!=s[i+1]){
                        ans[i]=j;
                    break;
                    }else if(i==n-1){
                        ans[i] = j ;
                    }
                    
                }
    
                }
 
        }else{
            ans[i] =s[i];
        }
    }
    for(int i = 0 ; i<n ;i++) cout << ans[i] ;
    cout << endl;
    
}