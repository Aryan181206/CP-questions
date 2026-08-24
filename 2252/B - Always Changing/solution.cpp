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
        int n; cin>>n; 
        string s; cin>>s;
        
        int a=INT_MAX,b=INT_MAX;
        bool anss = false;
        
        int noofzeroestodel=0,numberofonestodel=0;
        int i =0, d=0 ;
        int f = -1,l =-1;
        // 010101....
        while(i < n){
            if(d%2==0){
                if(s[i] == '0'){
                    if(f != -1){
                        l = 0;
                    }
                    if(f == -1)
                    f = 0;
                    i++; d++;
                }
                else{
                    numberofonestodel++; i++; continue;
                }
            }
            else{
                if(s[i] == '1'){
                    if(f != -1){
                        l = 1;
                    }
                    if(f == -1)
                    f = 1;
 
                    i++; d++;
                }
                else{
                    noofzeroestodel++; i++; continue;
                }
            }
        }
       
        
        int ex1 =0,ex2=0;
        if(f != -1)ex1++; 
        if(l == 0)ex1++;
        if(l == 1)ex2++;
        if(abs(noofzeroestodel- numberofonestodel) <= 1){
            a = noofzeroestodel + numberofonestodel; anss = true;
        }
        else if(numberofonestodel> noofzeroestodel && numberofonestodel - ex1-noofzeroestodel <= 1){
            a = noofzeroestodel + numberofonestodel + ex1; anss = true;
        }
       
        if(noofzeroestodel > numberofonestodel && noofzeroestodel - numberofonestodel - ex2 <= 1){
            a = min(a, noofzeroestodel + numberofonestodel + ex2); anss = true;
        }
        
        //101010
        i =0, d=0 ; noofzeroestodel=0; numberofonestodel=0; f = -1,l =-1;
        while(i < n){
            if(d%2==1){
                if(s[i] == '0'){
                    if(f != -1){
                        l = 0;
                    }
                    if(f == -1)
                    f = 0;
                    i++; d++;
                }
                else{
                    numberofonestodel++; i++; continue;
                }
            }
            else{
                if(s[i] == '1'){
                    if(f != -1){
                        l = 1;
                    }
                    if(f == -1)
                    f = 1;
 
                    i++; d++;
                }
                else{
                    noofzeroestodel++; i++; continue;
                }
            }
        }
        
        ex1 =0,ex2=0;
        if(f != -1)ex2++; 
        if(l == 0)ex1++;
        if(l == 1)ex2++;
 
        if(abs(noofzeroestodel- numberofonestodel) <= 1){
            b = noofzeroestodel + numberofonestodel; anss = true;
        }
        else if(noofzeroestodel > numberofonestodel && noofzeroestodel - numberofonestodel - ex2 <=1){
            b = noofzeroestodel + numberofonestodel + ex2; anss = true;
        }
        if(numberofonestodel > noofzeroestodel && numberofonestodel - noofzeroestodel - ex1 <=1){
            b = min(b,noofzeroestodel + numberofonestodel + ex1); anss = true;
        }
        
        if(anss){
            cout << min(a,b)<<endl;
        }
        else{
            cout<< -1 <<endl;
        }
        
        
    }
    
}