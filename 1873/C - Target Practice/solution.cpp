#include<bits/stdc++.h>
using namespace std;
 
int a[10][10] = {1,1,1,1,1,1,1,1,1,1,
                 1,2,2,2,2,2,2,2,2,1,
                 1,2,3,3,3,3,3,3,2,1,
                 1,2,3,4,4,4,4,3,2,1,
                 1,2,3,4,5,5,4,3,2,1,
                 1,2,3,4,5,5,4,3,2,1,
                 1,2,3,4,4,4,4,3,2,1,
                 1,2,3,3,3,3,3,3,2,1,
                 1,2,2,2,2,2,2,2,2,1,
                 1,1,1,1,1,1,1,1,1,1
 
};
 
 
int main(){
    
    int t ; cin >> t ;
    while(t--){
        char plate[10][10];
        int score = 0 ;
        for(int i = 0 ; i < 10 ; i++){
            for(int j = 0 ; j < 10 ; j++){
                cin >> plate[i][j];
                if(plate[i][j] == 'X'){
                    score = score + a[i][j];
                }
            }
        }
        cout<< score << endl;
    }
    
}