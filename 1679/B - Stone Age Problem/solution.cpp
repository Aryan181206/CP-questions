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
    int n ;
    cin >> n ;
    int q ;
    cin >> q ;
    
    vector<pair<int,int>>v(n,{0,0}) ;
    for(int i = 0 ; i<n ;i++){
        cin>> v[i].ff;
    }
    
    pair<int,int> global = {0,-1};
    
    ll sum = 0 ;
    
    for(int i = 0 ; i<n ;i++){
        sum += v[i].ff;
    }
    
    
    for(int it = 1 ; it<=q ;it++){
        int x ;
        cin >> x ;
        
        if(x==1){
            int ind , val ;
            cin >> ind >> val ;
            ind--;
            
            if(v[ind].ss > global.ss){
                sum += (val - v[ind].ff) ;
            }
            else{
                sum += (val - global.ff);
            }
            
            v[ind].ff = val ;
            v[ind].ss = it ;
        }
        else{
            int val ;
            cin >> val ;
            
            global.ff = val ;
            global.ss = it ;
            sum = (long long)(val) * n;
        }
        
        cout << sum << endl;
    }
    return 0 ;
    
}