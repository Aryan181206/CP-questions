#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t ; cin >> t ;
    while (t--){
        int n ; cin >> n ;
        // two players Vanya , vora 
        // lets assume vora always do add 1 on n 
        // both add if normal game going on
        
            if(n%3==1 || n%3==2) {
                // vanya wins
                cout<<"First" <<endl ;
                
            }else{
                // n%3 == 0
                cout << "Second" <<endl ;
            }
            
        
 
        }
    }