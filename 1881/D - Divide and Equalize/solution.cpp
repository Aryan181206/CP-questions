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
        int n ;
        cin >>  n ;
        vector<int> a(n);
        loop(i,0,n) cin >>a[i] ;
        
        map<int,int> mp;
 
        for(int i = 0; i < n; i++) {
            for(int j = 2 ; j*j<=a[i];j++){
                while(a[i]%j==0){
                    mp[j]++;
                    a[i] /= j;
                }
            }
            
            if(a[i]>1){
                mp[a[i]]++;
            }
        }
        
        int flg = 1 ;
        for(auto it :mp){
            if(it.ss %n !=0 ){
                flg = 0 ;
                break;
            }
        }
        
        if(flg){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
        
        
 
    }
    
    
    
    
    
    
    
    
    
    
}