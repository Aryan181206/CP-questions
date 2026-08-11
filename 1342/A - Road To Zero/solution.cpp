#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
 
int main(){
    int t ; cin >> t ;
    while(t--){
        ll x ,y ;
        cin >> x >> y ;
        ll a, b ;
        cin >> a >> b ;
        ll dollor = 0;
        ll mini = min(x,y);
        ll dif = abs(x-y);
        ll dollor2 = 0 ;
 
        if(x == 0 && y == 0){
            dollor = 0 ;
        }else{
            dollor = (b*mini) + (dif*a) ;
            dollor2 = a*(x+y);
            
            
            
        }
 
        cout << min(dollor,dollor2) << endl;
        // cout << dif << endl;
        // cout << mini << endl;
        
    }
}