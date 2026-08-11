#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t ; cin >> t ;
    while (t--)
    {
        bool ans ;
        int n ; cin >> n ;
        vector<int> a(n) ;
        for(int i = 0 ; i < n ; i++){
            cin >> a[i] ; 
        
        }
        for(int i = 0 ; i < n ; i++){
            if(a[i] == 67){
                ans = true ;
                break;
            }else{
                ans = false ;
            }
        }
        if(ans == true){
            cout<<"YES" << endl;
        }else{
            cout<<"NO"<< endl;
        }
 
 
    }
}