#include<bits/stdc++.h>
using namespace std ;
int main(){
    int n ; // times 
    cin>>n ;
   
 
    int ones  = 0,twos =0 ;
    for(int i = 0 ; i < n ; i++){
        int x ;
        cin >> x ;
        if(x==1)  ones++;
        else twos++;
    }
 
 
    if (n==ones){  // 2 ->0
        for(int i = 1 ; i<=n ;i++){
            cout << 1 << " ";
        }
    }else if(n==twos){  // 1 -> 0
        for(int i = 1 ; i<=n ;i++){
            cout << 2 << " ";
        }
    }else{
        cout<< "2 1 " ;
       
        for(int i = 1 ; i<=twos-1 ;i++){
            cout << "2 " ;
        }
        for(int i = 1 ; i<=ones-1 ;i++){
            cout << "1 ";
        }
    }
 
    
 
}