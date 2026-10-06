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
    fast
    test{
        int n ;
        int m ;
        cin >> n >> m ;
        
        vector<int> v(m);
        loop(i,0,m) cin >>v[i] ;
        
        sort(all(v));
        
        vector<int> gaps;
        loop(i,0,m-1){
            gaps.pb(v[i+1]-v[i]-1);
        }
        
        gaps.pb(v[0]+n-v[m-1]-1);
        
        // for(auto g : gaps){
        //     cout << g << " ";
        // }
        
        sort(gaps.rbegin(),gaps.rend());
        
        int saved = 0 ;
        int days = 0 ;
        
        for(auto g : gaps){
            int curg = g - days*2;
            if(curg>0){
                saved++;
                
                curg = curg -2 ;
                if(curg>0) saved = saved + curg ;
                
                days+=2;
            }
        }
        cout << n-saved << endl;
        
    }
}