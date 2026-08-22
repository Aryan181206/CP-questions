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
        int n, x;
        cin >> n >> x;
 
        vector<int> a(n);
 
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
 
        int lo = 1;
        int hi = 1e9 + x + 1;
 
        while(lo <= hi){
            int mid = lo + (hi - lo) / 2;
 
            int water = 0;
 
            for(int i = 0; i < n; i++){
                if(a[i] < mid){
                    water += mid - a[i];
                }
 
               
                if(water > x)
                    break;
            }
 
            if(water <= x){
                
                lo = mid + 1;
            }
            else{
               
                hi = mid - 1;
            }
        }
 
        cout << hi ;
        nl ;
    }
}