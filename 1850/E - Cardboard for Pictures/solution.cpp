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
        int n , c ;
        cin >> n >> c ;
        vector<int> s(n);
        for(int i = 0 ; i<n ;i++){
            cin>>s[i];
        }
        int low = 0 ;
        int h = 1e9 ;
        int ans = 0 ;
        
        while(low<=h){
            int w = low + (h-low ) / 2 ;
            int sum = 0 ;
            for(int i = 0 ; i<n ; i++){
                int x = (s[i] + 2 * w) ;
                sum =sum + (x*x) ;
                if(sum>c) break;
            }
            if(sum == c){
                ans = w ;
                break;
            }
            else if(sum < c){
                low = w+1;
            }
            else{
                h = w-1;
            }
        }
        
        cout << ans << endl ;
        
        
        
        
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
}