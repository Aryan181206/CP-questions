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
    int n , k ;
    cin>> n >> k;
    ll deno = n-k+1;
    // constant sliding window
    vector<int> a(n);
    
    ll total_sum = 0;
    loop(i,0,n) cin >>a[i] ;
    
 
    ll sum = 0 ;
    for(int i = 0 ; i<k ;i++){
        sum+=a[i];
    }
    total_sum =sum ;
    int p1 = 0 ;
    int p2 = k ;
    
    while(p2<n){
        sum -=a[p1];
        sum += a[p2];
        total_sum +=sum ;
        p1++;
        p2++;
    }
    cout << fixed << setprecision(6) << 1.0*total_sum / (n-k+1) << endl;
    
    
     
    
    
}