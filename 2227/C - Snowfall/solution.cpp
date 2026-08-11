#include <bits/stdc++.h>
using namespace std;
 
int main(){
  int t ; cin >> t ;
  while(t--){
 
     int n;
        cin >> n;
    vector<int> six;      // divisible by 6
        vector<int> even;     // divisible by 2 only
        vector<int> neutral;  // divisible by neither 2 nor 3
        vector<int> three;    // divisible by 3 only
 
         for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
 
            if (x % 6 == 0) {
                six.push_back(x);
            }
            else if (x % 2 == 0) {
                even.push_back(x);
            }
            else if (x % 3 == 0) {
                three.push_back(x);
            }
            else {
                neutral.push_back(x);
            }
        }
 
        for (int x : six)
            cout << x << " ";
 
        for (int x : even)
            cout << x << " ";
 
        for (int x : neutral)
            cout << x << " ";
 
        for (int x : three)
            cout << x << " ";
 
        cout << '
';
    }
 
 
    
 
 
  
 
 
}