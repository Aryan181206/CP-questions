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
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie;
const int MOD=998244353;
const int INF=1e18;
const double PI=3.14159265358979323846;
const int LIMIT=3e6;
 
int getkth(vector<int>a , int k){
    set<int> s;
    vector<int> f;
    
    for(int x : a){
        s.insert(x);
        int mex = 0 ;
        while(s.count(mex)) mex++;
        f.pb(mex);
    }
    
    sort(all(f));
    reverse(all(f));
    return f[k-1];
    
}
 
 
int main(){
    test{
        int n ;
        int k ;
        cin >> n >> k ;
        vector<int> a(n);
        loop(i,0,n) cin >>a[i] ;
        
        int best = getkth(a,k);
        
        int x = -1 ;
        int y = -1 ;
        
        for(int i = 0 ; i<n ;i++){
            for(int j = i+1 ; j<n ;j++){
                swap(a[i], a[j]);
                
                int cur = getkth(a,k);
                
                if(cur>best) {
                    best = cur ;
                    x = i ;
                    y = j ;
                }
                swap(a[i],a[j]);
            }
        }
        
        if(x==-1) cout << -1 << endl ;
        else{
            cout << x+1 << " "<<y+1 << endl;
        }
        
        
        
        
        
        
    }
    
}