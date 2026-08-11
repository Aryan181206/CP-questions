#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t ; cin >> t ;
    while(t--){
        int n ; cin >> n ;
        vector<int> arr(n);
        for(int i = 0 ; i<n ; i++){
            cin >> arr[i] ;
        }
        int count_zero = 0 ;
        int max_zeros = 0 ;
        for(int i = 0 ; i<n ; i++){
            if(arr[i]==0){
                count_zero++;
            }else{
                count_zero = 0 ;
            }
            max_zeros = max(max_zeros,count_zero);
        }
        cout<< max_zeros << endl ;
 
        
    }
}