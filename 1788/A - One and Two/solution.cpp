#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t ; cin >> t ;
    while(t--){
        int n ; cin >> n ;
        int arr[n] ; 
        for(int i = 0; i <n ; i++){
            cin >> arr[i];
        }
 
        int ans = -1;
        for(int k = 0 ; k<n ; k++){
            int twos_till_k = 0;
            int twos_after_k = 0 ;
            for(int i = 0 ; i<=k ; i++){
                if(arr[i]==2) twos_till_k++;
            }
             for(int j = k+1 ; j<n ; j++){
                if(arr[j]==2) twos_after_k++;
            }
            if(twos_after_k == twos_till_k){
                ans = k+1 ;
                break ;
            }   
            
           
        }
        cout << ans << endl;
    }
        
 
 
    
}