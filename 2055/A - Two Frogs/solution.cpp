#include<bits/stdc++.h>
using namespace std;
int main(){
    int t ; cin >> t ;
    while(t--){
        int n , a ,b ;
        cin >> n >> a >> b ;
        if(n>2){
            int noofbox = abs(a-b) -1 ; // odd honge to Alice win
            if(noofbox%2!=0){
                cout<< "YES" << endl ;
            }
            else{
                cout<< "NO" << endl ;
            }
        }
        else{
            cout << "NO" << endl ;
        }
    }
 
 
}