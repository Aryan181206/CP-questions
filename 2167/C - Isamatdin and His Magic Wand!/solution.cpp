#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
 
        for (int i = 0; i < n; i++) cin >> a[i];
 
        int even = 0 ;
        int odd = 0;
        for(int i = 0 ; i < n ; i++){
            if(a[i]%2 == 0){
                even++;
            }else{
                odd++;
            }
        }
 
        if(even > 0 && odd > 0){
            sort(a.begin() , a.end());
        }
 
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout<<endl ;
 
 
 
   
    }
}