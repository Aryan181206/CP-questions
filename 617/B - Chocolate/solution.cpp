#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ; cin >> n ;
    vector<int> a(n);
    for(int i = 0 ; i < n ; i++){
        cin >> a[i] ;
    }
 
    vector<int> pos;
    // 1 0 1 0 1 
 
    for (int i = 0; i < n; i++) {
        if (a[i] == 1) {
            pos.push_back(i);
        }
    }
 
    if (pos.size() == 0) {
        cout << 0;
        return 0;
    }
 
 
    long long ans = 1;
 
    for(int i = 1 ; i < pos.size(); i++){
        ans =ans * (pos[i] - pos[i-1]) ;
    }
 
    cout << ans ;
    
 
 
 
 
 
}