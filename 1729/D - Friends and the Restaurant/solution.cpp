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
        cin >> n ;
        vector<int> x(n); // spending
        vector<int> y(n) ; // budgetes
        
        loop(i,0,n) cin >> x[i] ;
        loop(i,0,n) cin >> y[i] ;
       
        vector<int> val(n);
        
        loop(i,0,n){
            val[i] = y[i]-x[i];
        }
        int days = 0 ;
        
        std::sort(val.begin(), val.end());
        
        int i = 0 ;
        int j = n-1 ;
        while(i < j){
            
            if(val[i] + val[j] >= 0){
                days++;
                i++;
                j--;
            }
            else{
                i++;
            }
        }
        cout << days << endl;
        
        
        
        
    }
}