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
       
        
        int n;
        string s;
        cin >> n >> s;
        int k = count(s.begin(), s.end(), '1');
        if (k == 1) {
            
            cout << 0 << endl;
            
        } else if (k == 2) {
            cout << 1 << endl;
        } else {
            int r = s.rfind('1') ;
            int l = s.find('1') ;
            cout << r - l << "
";
        }
    }
   
    }
    
    