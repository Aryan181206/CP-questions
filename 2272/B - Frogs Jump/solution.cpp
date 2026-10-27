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
        int n ;
        cin >> n ;
        string s1;
        string s2 ;
        cin>> s1>> s2 ;
        int c = 0 ;
        
        for(int i = 0 ;i<n ;i++){
            if(s1[i]=='f') c++;
            if(s2[i]=='f') c++;
        }
        
        cout << c%2 << endl;
    }
    
}