#include<bits/stdc++.h>
using namespace std;
int main(){
    int t ; cin >> t;
    while(t--){
        int n ; cin >> n;
        vector<int> vec(n);
        for(int i = 0; i< n ; i++ ){
            cin >> vec[i] ;
        }
        
        // go using frequency array
 
        map<int,int> freq;
        for(int i = 0 ; i < n ; i++){
            freq[vec[i]]++;
        }
 
        int freq1 = freq.begin()->second;
        int freq2 = freq.rbegin()->second;
 
        if(freq.size() >= 3){
            cout<<"NO"<<endl;
        }else{
           if(freq1 == freq2 || abs(freq1 - freq2) == 1){
               cout<<"YES"<<endl;
           }else{
               cout<<"NO"<<endl;
           }
        }
 
    }
    
 
}