#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while(t--) {
        int n;
        cin >> n;
 
        vector<int> a(n);
 
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
 
        bool ok = true;
 
        for(int i = 0; i < n; i++) {
 
            int pos = i + 1;  
            int val = a[i];
 
            while(pos % 2 == 0) pos /= 2;
            while(val % 2 == 0) val /= 2;
 
            if(pos != val) {
                ok = false;
                break;
            }
        }
 
        cout << (ok ? "YES" : "NO") << endl;
    }
}