#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t ; 
    cin >> t ;
    while(t--){
        int n ; cin >> n ;
        int arr[n] ; 
        for(int i = 0 ; i < n ; i++){
                cin >> arr[i] ;
            }
        if(n>1){
            for(int i = 0 ; i < n ; i++){
                cout << 2 << " " ;
            }
            cout << endl ;
 
        }else{
            cout<<1 << endl;
        }
        
    }
}