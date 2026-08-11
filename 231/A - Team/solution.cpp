#include<bits/stdc++.h>
using namespace std ;
int main(){
    //implement if at least 2 sure to solve
    //otherwise not solve the problem
    // total n problems
    //
    int count = 0 ;
    int n ;
    cin>>n ;
    while (n--)
    {
        
        int view[3] ;
        for(int i=0;i<3;i++){
            cin>>view[i] ;
        }
        int sum = 0 ;
        for(int i=0;i<3;i++){
            sum = sum + view[i] ;
        }
        if (sum >=2){
            count++ ;
        }
    }
    cout<<count<<endl ;
    
 
}