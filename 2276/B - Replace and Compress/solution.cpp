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
        string s ;
        cin >> s;
        int n = s.size();
        
        int cnt = 1 ;
        bool inc = false ;
        bool dec = false;
        
        //set<string> unique ;
        set<int> st ;
        
        for(int i = 1 ; i<n ;i++){
            if(s[i]!=s[i-1]) cnt++;
        }
        st.insert(cnt);
        
        for(int i=1 ;i<n-1 ;i++){
            if(s[i-1]==s[i+1]){
                if(s[i]!=s[i-1]){
                    st.insert(cnt-2);
                }
                else{
                    st.insert(cnt+2);
                }
            }
        
       
    }
     cout << st.size() << endl ;
    }
}
 
 
 