#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t; cin >> t ;
    while(t--){
        int n ; cin >> n ; // number of cells
        string s ;
        cin >> s ;
        // output number of steps only
        //#...#..#.#  example string
        //we have to check continue 3 dots
        int three_dot = 0;
        int dots = count(s.begin(),s.end(),'.');
        for(int i = 1 ; i < n-1 ; i++){
            if(s[i-1]=='.' && s[i]=='.' && s[i+1]=='.'){
                three_dot++;
            }
        }
        if(three_dot >=1){
            cout<< "2"<<endl;
        }else {
            cout << dots <<endl ;
 
        }
 
    }
}