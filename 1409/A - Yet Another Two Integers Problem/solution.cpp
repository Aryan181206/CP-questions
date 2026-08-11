#include<bits/stdc++.h>
using namespace std;
 
#define ll long long 
 
int main(){
    int t ; cin >> t ;
    while(t--){
        ll a ;
        ll b ;
        cin >> a >> b ;
        // minimum moves 
        ll dif = abs(a-b);
        ll moves = 0 ;
 
        if(dif>=10){
            if(dif%10 == 0){
                moves = moves + (dif/10);
            }else{
                moves = moves + (dif/10) + 1;
            }
        }else if(dif==0){
 
        }
        else{
            // diff is less than 10 and  greater than 1
            moves = moves +1;
        }
 
        cout << moves << endl;
 
        
 
 
    }
}