#include<bits/stdc++.h>
using namespace std ;
 
int main(){
    int t ; cin >> t ;
    while (t--)
    {
        /* code */
        int n ; cin >> n ;
        vector<int> a(n) ; // 
        
        for(int i = 0 ; i<n ;i++){
            cin >> a[i];
 
        }
        
        // check all are same or not 
        bool checkSame  = true ;
        for( int i = 0 ; i<n ; i++){
            if(a[i]!=a[0]){
                checkSame=false; 
                break;
            }
        }
 
        if(checkSame){
            // all same 
            cout << a.size() << endl;
        }else{
            cout << 1 << endl;
        }
        
 
    }
 
    
}