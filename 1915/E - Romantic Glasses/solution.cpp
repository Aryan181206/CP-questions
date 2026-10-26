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
 
int main(){
    test{
        int n ; cin >> n ;
        vector<int> a(n) ;
        loop(i,0,n) cin >>a[i] ;
        
        vector<ll>preE(n,0);
        vector<ll>preO(n,0);
        
        preE[0] = a[0];
        
        int flag = 0;
        
        map<ll,ll>mp;
        mp[preE[0]-preO[0]]++;
        
        for(int i = 1 ; i<n ;i++){
            preO[i] += preO[i-1];
            preE[i] += preE[i-1];
            
            if(i%2){
                preO[i] += a[i];
            }else{
                preE[i] += a[i];
            }
            
            mp[preE[i] - preO[i]]++;
            
            
            if(mp[preE[i] - preO[i]] == 2 || preO[i] - preE[i] == 0){
                flag = 1 ;
                break;
            }
        }
        
        if(flag){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
        
    }
}