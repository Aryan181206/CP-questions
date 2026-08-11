#include<bits/stdc++.h>
using namespace std ;
 
int main(){
    int t ;  cin >> t ;
    while(t--){
 
        int n ; cin >> n ;
        vector<int> a(n);
        for(int i = 0 ; i<n ;i++){
            cin >> a[i];
        }
 
        sort(a.begin(),a.end());
        vector<int> diff;
 
        bool present = false;
 
        if(n==1){
            cout<< "YES" << endl ;
        }else{
            for(int i = 0 ; i< n-1 ; i++){
                int diff1 = abs(a[i]-a[i+1]);
                diff.push_back(diff1);
            }
 
            
            for(int any : diff){
                if(any > 1){
                    present = true;
                }
            }
            if(present) cout<< "NO"<< endl;
            else cout << "YES" << endl ;
 
 
        }
    }
}