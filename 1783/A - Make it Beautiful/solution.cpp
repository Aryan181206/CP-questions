#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t ; cin >> t ;
    while(t--){
        int n ; cin >> n ;
        vector<int> a(n);
        vector<int> b(n);
        for(int i = 0 ; i<n ;i++){
            cin >> a[i];
            b[i] = a[i];
        }
        sort(a.begin(),a.end());
        int min = a[0];
        int max = a[n-1];
        if(min == max){
            cout << "NO" << endl ;
        }
        else{
            cout<< "YES" <<endl ;
            cout<< max << " " ;
            for(int i = 0 ; i< n-1 ; i++ ){
                cout << a[i] << " " ;
            } 
            cout << endl ;
 
 
        }
    }
}