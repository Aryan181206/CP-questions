#include<bits/stdc++.h>
using namespace std ;
 
int main(){
    int t ; cin>> t ;
    while(t--){
        int n , k;
        cin >> n >> k;
        vector<int> a(n);
        vector<int> b(n);
 
        for(int i = 0 ; i<n ; i++){
            cin >> a[i];
        }
        for(int i = 0 ; i<n ; i++){
            cin >> b[i];
        }
 
        sort(a.begin(),a.end());
        reverse(a.begin(),a.end());
        sort(b.begin(),b.end());
 
        // k moves
        int index = n-1;
        while(k--)
        {
            if(a[index]<b[index]){
                a[index] = b[index];
            }
            index--;
        }
 
        int sum = accumulate(a.begin(),a.end(),0);
        cout << sum << endl;
        
 
 
 
    }
}