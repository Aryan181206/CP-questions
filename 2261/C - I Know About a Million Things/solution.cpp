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
        ll n ;
        cin >> n;
        
        ll e = 0 ;
        ll o = 0 ;
        loop(i,0,n) {
            int x ;
            cin >>x ;
            if(x&1) o++;
            else e++;
            
        }
        if(o%2==0){
            cout << "Moggity" << endl ;
        }
        else if(o ==1 && e==1){
            cout << "Larpity" << endl ;
        }
        else if(o ==3 && e==0 ){
            cout << "Larpity" << endl;
        }
        else{
            cout <<"Moggity" << endl;
        }
            
        
    }
   
    }
    
    
    
    
    
    