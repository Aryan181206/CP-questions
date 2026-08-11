#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n ; cin >> n;
    int arr[n+1];
    for(int i = 1 ; i <=n ; i++){
        cin >> arr[i];
    }
 
    int absarr[n+1] ;
    for(int i = 1 ; i <=n ;i++){
        absarr[i] = abs(arr[i]);
    }
 
    int min = absarr[1];
     for(int i = 1 ; i <=n ;i++){
        if(min > absarr[i]){
            min = absarr[i];
        }
    }
    cout << min << endl;
 
}