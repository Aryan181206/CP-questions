#include<bits/stdc++.h>
using namespace std ;
 
int main(){
    int t;cin >> t ;
    while(t--){
        int n , m; cin >> n >> m;
        int a[n][m];
        vector<int> rows(n,0);
        vector<int> col(m,0);
 
        for(int i = 0 ; i< n ; i++){
            for(int j=0;j<m;j++){
                cin>> a[i][j];
                if(a[i][j]==1){
                    rows[i]=1;
                    col[j]=1;
                }
            }
        }
 
        int emtyrow = 0;
        int emtycol = 0 ;
        for(int i = 0 ; i<n;i++){
            if(rows[i]==0) emtyrow++;
        }
        for(int i=0; i<m ;i++){
            if(col[i]==0) emtycol++;
        }
 
        int move = min(emtycol,emtyrow);
        if(move%2){
            cout << "Ashish"<< endl;
        }else{
            cout<< "Vivek" << endl ;
        }
         
    }
}