#include<bits/stdc++.h>
using namespace std;
int main () {
    int t ; cin >> t ;
    while(t--){
        int n ; cin >> n ;
        vector<int> v(n);
        for(int i = 0 ; i < n ; i++){
            cin >> v[i];
        }
        int max = *max_element(v.begin(),v.end());
        int min = *min_element(v.begin(),v.end());
        cout << max - min +1 << endl; 
    }
    
}