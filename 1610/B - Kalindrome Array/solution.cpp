#include<bits/stdc++.h>
using namespace std;
 
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
 
bool check(vector<int> &a , int x){
    int n = a.size();
    vector<int>b;
    for(int i = 0 ; i<n;i++){
        if(a[i]!=x){
            b.push_back(a[i]);
        }
    }
    int m = b.size();
    for(int i = 0 ; i<m ; i++){
        if(b[i]!=b[m-i-1]){
            return false;
        }
    }
    return true;
}
 
void solve(){
    
        int n ; cin >> n ;
        vector<int> arr(n);
        for(int i = 0 ; i<n ;i++){
            cin >> arr[i] ;
        }
        //1 3 1 2 3 1 1
        
        for(int i = 0; i < n; i++){
            if(arr[i]!=arr[n-1-i]){
                if(check(arr,arr[i]) || check(arr,arr[n-1-i])){
                    cout << "YES" << endl;
                }
                else{
                    cout << "NO" << endl;
                }
                return;
            }
        }
        cout << "YES" << endl;
        
}
 
int main(){
    fast
    test{
        solve();
    }
}