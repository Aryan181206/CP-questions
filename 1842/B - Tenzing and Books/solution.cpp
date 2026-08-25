#include<bits/stdc++.h>
using namespace std;
#define int long long
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
 
int32_t main(){
    test{
        int n , x ;
        cin >> n >> x ;
        vector<int> pre[3] ;
        for(int i= 0 ; i<3 ;i++){
            int s = 0 ; 
            pre[i].push_back(s);
            for(int j = 0 ;j<n ;j++){
                int a ; cin >>a ;
                if((s|a)!=s){
                    s = s|a;
                    pre[i].push_back(s);
                }
            }
        }
        bool ans = false ;
        for(int A : pre[0]){
            for(int B : pre[1]){
                for(int C : pre[2]){
                    if((A|B|C) == x) ans = true;
                }
            }
        }
        
        cout << (ans ? "YES
" : "NO
") ;
        
        
        
    }
}