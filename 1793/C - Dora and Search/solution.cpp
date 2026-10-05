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
 
bool isMinOrMax(int x , set<int> &setele){
    
    if((*setele.begin())==x) return true;
    
    if((*setele.rbegin())==x) return true;
    
    return false;
}
 
 
int main(){
   fast
   test{
       int n ; cin >> n ;
       vector<int> a(n);
       for(int i =0 ; i<n ;i++){
           cin >> a[i] ;
       }
       set<int> setele(a.begin(),a.end());
       int i = 0 ;
       int j = n-1;
      
      
        while(i<j){
            
            if(isMinOrMax(a[i],setele)){
                setele.erase(a[i]);
                i++;
                continue;
            }
            
            if(isMinOrMax(a[j],setele)){
                setele.erase(a[j]);
                j--;
                continue;
            }
            
            break;
            
        }
        
        if(i<j){
            cout<< i+1 << " " << j+1 << endl;
        }else{
            cout << -1 << endl;
        }
       
       
       
       
      
       
   }
}