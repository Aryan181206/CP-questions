#include<bits/stdc++.h>
using namespace std ;
 
 
 
int main(){
     string number;
 
     cin>> number;
     string ans ="" ;
     for(int i = 0 ; i < number.size() ; i++){
        int digit = number[i] - '0' ;
        int inverted = 9 - digit ;
        ans += (min(digit,inverted)+'0');    
     }
     int i=0;
     while(i<ans.size()){
          if(ans[i]!='0') break ;
          ans[i]='9';
     }
     cout << ans ;
}