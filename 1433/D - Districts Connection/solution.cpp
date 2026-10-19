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
        int n ;
        cin >> n ;
        vector<int> a(n+1);
        for(int i =1 ;i<=n;i++){
            cin >>a[i];
        }
        
        vector<pair<int,int>>edges;
        
        int val1 = 1 ;
        int val2 = -1 ;
        
        for(int i = 2 ; i<=n ;i++){
            
            if(a[i] != a[1]){
                edges.pb({1,i});
                val2 = i ;
                break;
            }
        }
        
        if(val2 ==-1){
            cout << "No" << endl ;
            continue;
        }
        
        for(int i = 2 ; i<=n ;i++){
            if(i==val2){
                continue;
            }
            if(a[i]!=a[val1]){
                edges.pb({val1,i});
            }else{
                edges.pb({val2,i});
            }
        }
        
        cout <<"YES" << endl;
        
        for(auto e : edges){
            cout << e.ff << " " <<e.ss << endl;
        }
        
        
        
        
        
        
        
        
    }
}