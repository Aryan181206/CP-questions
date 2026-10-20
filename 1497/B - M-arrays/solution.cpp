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
        int n , m ;
        cin >> n >> m ;
        vector<int> a(n);
        loop(i,0,n){
            cin >>a[i] ;
        } 
        vector<int>rem(m);
        
        for(int i = 0 ; i<n ;i++){
            rem[a[i]%m]++;
        }
        
        int ans = 0 ;
        
        for(int i = 0 ; i<m ;i++){
            int x = rem[i] , y = rem[(m-i)%m];
            if((x==0)and (y==0)) continue;
            
            int tmp = min(x,y);
            
            x = x - min(tmp+1,x);
            y = y - min(tmp+1,y);
            
            ans++;
            
            ans+= (x+y);
            
            rem[i]=0;
            rem[(m-i)%m]=0 ;
        }
        
        cout << ans << endl;
        
        
        
        
        
        
        
        
        
        
        
    }
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 