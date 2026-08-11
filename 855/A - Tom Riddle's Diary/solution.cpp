#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    map<string, int> m;
 
    while(n--) {
        string s;
        cin >> s;
 
        if(m[s] > 0) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
 
        m[s]++;
    }
 
    return 0;
}