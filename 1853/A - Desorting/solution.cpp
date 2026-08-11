#include<bits/stdc++.h>
using namespace std;
 
 
int main(){
    
    int t ; cin >> t ;
    while(t--){
        int n ;cin>>n ;
        vector<int> arr(n) ;
        for(int i = 0 ; i < n ;i++){
            cin >> arr[i];
        }
 
        int opt = 0 ; 
        vector<int> cop = arr;
        sort(cop.begin(),cop.end());
 
 
 
        if(cop != arr){
            cout << opt << endl ;
        }else{
            int opt2 = INT_MAX ;
             for (int i = 0; i < n - 1; i++){
                int d = arr[i+1] - arr[i];
                int req_op =d/2  +1 ;
                opt2 = min(opt2,req_op);
 
             }
            cout << opt2 << endl ;
 
        }
    }
    
}