#include<bits/stdc++.h>
using namespace std;
 
int main(){
 
    int t ;
    cin >> t ;  
    while(t--)
    {
    // find x ,y such that l <= x < y <= r and l<= LCM(x,y) <= r
    int l ,r ;
    cin >> l >> r ;
 
    if (2*l <= r){
        cout << l << " " << 2*l << endl;
    }
    else{
        cout << -1 << " " << -1 << endl;
    }
}
}