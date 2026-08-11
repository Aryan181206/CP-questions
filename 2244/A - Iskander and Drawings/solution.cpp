#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t ; cin >> t ;
    while(t--){
        int n ; cin >> n ;
        string s ;
        cin >> s ;
        vector<int> line;
 
 
        int cnt = 0;
        for(char ch : s) {
        if (ch == '#') {
            cnt++;
        } else { // '*' mila
            if (cnt > 0) {
                line.push_back(cnt);
                cnt = 0;
            }
        }
    }
 
    if (cnt > 0)
    line.push_back(cnt);
 
    
 
    int maxline = 0;
 
    if(line.size() != 0){
        maxline = *max_element(line.begin(),line.end());
    }
 
 
 
        int time = 0;
        
 
 
        if(maxline == 1 || maxline == 2){
            time = 1;
        }else{
            if(maxline%2==0){
                time = maxline/2;
            }else{
                // odd
                time = (maxline/2) + 1;
            }
        }
 
        //cout << maxline << endl;
        cout << time << endl;
 
        // for(int a : line){
        //     cout <<a << endl;
        // }
        
    }
}
 