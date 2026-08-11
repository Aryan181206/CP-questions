#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
int main()
{
 
    ll n ; cin >> n ;
    ll d ; cin >> d ;
    vector<ll> power(n);
    for(ll i = 0 ; i<n ; i++){
        cin >> power[i];
    }
    sort(power.begin(),power.end());
 
    ll left = -1 ;
    ll right = n-1;
 
    ll t_size = 1 ;
    ll win = 0 ;
    while(left < right){
        if(power[right] * t_size <= d  &&  left<right){
            left++;
            t_size++;
        }else{
            right--;
            win++;
            t_size = 1 ;
        }
    }
 
    cout << win << endl ;
    
    
}