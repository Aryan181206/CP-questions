#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
 
 
 
 
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n ;
        cin >> n ;
        vector<ll> a(n);
        vector<ll> b(n);
        for(ll i = 0 ; i<n ;i++){
            cin>> a[i] ;
     
        }
        for(ll i = 0 ; i<n ;i++){
            cin>> b[i] ;
   
        }
 
        vector<ll> long_sub_a(2*n +1,0);
        vector<ll> long_sub_b(2*n +1,0);
 
        ll ct = 1 ;
        ll i = 1 ;
        while(i<n){
 
            if(a[i] == a[i-1]){
                ct++;
            }else{
                long_sub_a[a[i-1]] = max(long_sub_a[a[i-1]],ct);
                ct =1 ;
            }
            i++;
 
        }
 
        long_sub_a[a[n-1]] = max(long_sub_a[a[n-1]],ct);
 
        ct =1 ;
        i=1;
        while(i<n){
 
            if(b[i] == b[i-1]){
                ct++;
            }else{
                long_sub_b[b[i-1]] = max(long_sub_b[b[i-1]],ct);
                ct =1 ;
            }
            i++;
 
        }
 
        long_sub_b[b[n-1]] = max(long_sub_b[b[n-1]],ct);
 
        ll anslen = LLONG_MIN;
 
        for(ll i= 1 ;i<=2*n ;i++){
            anslen = max(anslen,long_sub_a[i]+long_sub_b[i]);
        }
 
        cout << anslen << endl;
 
 
 
 
 
 
 
 
 
    }
}