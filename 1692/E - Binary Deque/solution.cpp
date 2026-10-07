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
    test
    {
        int n ,s ;
        cin >> n >> s ;
        
        vector<int> v(n);
        for(int i = 0 ; i<n ;i++){
            cin >> v[i] ;
        }
        int len = -1 ;
        
        map<int,int> mp;
        
        mp[0] = -1 ;
        int sum = 0 ;
        
        for(int i = 0;i<n ;i++){
            sum +=v[i] ;
            if(mp.count(sum-s))
            {
                len = max(len,i-mp[sum-s]);
            }
            if(!mp.count(sum)){
                mp[sum] = i ;
            }
        }
        
        if(len == -1)
        {
            cout << "-1" << endl;
        }
        else{
            cout << n-len << endl ;
        }
    
        
    }
}