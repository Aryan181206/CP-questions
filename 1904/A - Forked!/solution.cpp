#include<bits/stdc++.h>
using namespace std;
 
int dx[4] = {-1,1,-1,1} , dy[4] = {-1,-1,1,1} ;
 
int main(){
    int t ; cin >> t ;
    while (t--)
    {
        long long int a , b ; cin >> a>> b ;
        long long int xk ,yk ; cin >> xk >> yk ;
        long long int xq , yq ; cin >> xq >> yq ;
        set<pair<int,int>> king_hit , qu_hit;
 
        for(int j = 0 ; j <4 ;j++){
            king_hit.insert({xk+dx[j]*a , yk+dy[j]*b});
            king_hit.insert({xk+dx[j]*b , yk+dy[j]*a});
 
            qu_hit.insert({xq+dx[j]*a , yq+dy[j]*b});
            qu_hit.insert({xq+dx[j]*b , yq+dy[j]*a});
 
        }
 
        int ans = 0 ;
        for(auto position : king_hit){
            if(qu_hit.find(position) != qu_hit.end()){
                ans++;
            }
        
        }
        cout<< ans << endl ;
 
    }
    
}