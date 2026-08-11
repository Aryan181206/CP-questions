///NOT COMPLETED
 
#include <bits/stdc++.h>
using namespace std ;
 
int main(){
    int t ;  cin>> t ;
    while(t--){
 
        // n hai numbers of station , x hai jaha jana hai
 
        int n , x ; cin >> n >> x ;
        vector<int> st(n);
        for(int i = 0 ; i < n ; i++){
            cin >> st[i] ;
        }
 
        st.push_back(x);
        st.insert(st.begin() ,0);
        // now st become 0 , ........ x
 
        // maximum gap in st values
        
 
        int N = st.size() ;
        int max = 0 ;
        for(int i = 0 ; i < N-1 ; i++){
            if(st[i+1] - st[i] > max){
            max = st[i+1] - st[i] ;
            }
        }
        
        int lastgapfuel ;
        lastgapfuel = 2*(x - st[N-2]) ;  
        
        int ans ;
        if(lastgapfuel>= max){
            ans=lastgapfuel;
        }else{
            ans = max ;
        }
        cout << ans << endl ;
        
        
    
 
 
 
    }
}