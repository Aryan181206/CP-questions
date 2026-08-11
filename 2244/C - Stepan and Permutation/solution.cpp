// // #include<bits/stdc++.h>
// // using namespace std;
 
// // int main(){
// //     int t ; cin >> t ;
// //     while(t--){
// //         int n ; cin >> n ;
// //         string s ;
// //         cin >> s ;
// //         vector<int> line;
 
 
// //         int cnt = 0;
// //         for(char ch : s) {
// //         if (ch == '#') {
// //             cnt++;
// //         } else { // '*' mila
// //             if (cnt > 0) {
// //                 line.push_back(cnt);
// //                 cnt = 0;
// //             }
// //         }
// //     }
 
// //     if (cnt > 0)
// //     line.push_back(cnt);
 
    
 
// //     int maxline = 0;
 
// //     if(line.size() != 0){
// //         maxline = *max_element(line.begin(),line.end());
// //     }
 
 
 
// //         int time = 0;
        
 
 
// //         if(maxline == 1 || maxline == 2){
// //             time = 1;
// //         }else{
// //             if(maxline%2==0){
// //                 time = maxline/2;
// //             }else{
// //                 // odd
// //                 time = (maxline/2) + 1;
// //             }
// //         }
 
// //         //cout << maxline << endl;
// //         cout << time << endl;
 
// //         // for(int a : line){
// //         //     cout <<a << endl;
// //         // }
        
// //     }
// // }
 
 
// #include <bits/stdc++.h>
// using namespace std;
 
// #define ll long long
 
// int main() {
//     int t;cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         vector<ll> a(n);
 
//         for (int i = 0; i < n; i++)
//             cin >> a[i];
 
 
//         bool ok = true;
 
 
//         for (int i = 0; i < n - 1; i++) {
//             if (a[i] < i+1) {
//                 ok = false;
//                 break;
//             }
 
//             ll extra = a[i] - (i+1);
//             a[i+1] += extra;
//         }
 
//         if (ok && a[n-1] >= n)
//             cout << "YES
";
//         else
//             cout << "NO
";
//     }
 
 
 
 
 
// }
 
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
void dfs(int u,int comp, vector<vector<int>> &adj,vector<int> &component) {
    component[u] = comp;
 
    for (int v : adj[u]) {
        if (component[v] == -1)
            dfs(v, comp, adj, component);
    }
}
 
int main(){
 
    int t;
    cin >> t;
 
    while (t--) {
        int n, x, y;
        cin >> n >> x >> y;
 
 
        vector<int> p(n + 1);
 
        for (int i = 1; i <= n; i++)
            cin >> p[i];
 
 
 
 
 
        vector<vector<int>> adj(n + 1);
 
        for (int i = 1; i <= n; i++) {
            if (i + x <= n) {
                
                adj[i].push_back(i + x);
                adj[i + x].push_back(i);
            }
            if (i + y <= n) {
                adj[i].push_back(i + y);
                adj[i + y].push_back(i);
            }
        }
 
        vector<int> component(n + 1, -1);
        int comp = 0;
 
 
 
 
        for (int i = 1; i <= n; i++) {
            if (component[i] == -1) {
                dfs(i, comp, adj, component);
                comp++;
            }
        }
 
        bool ok = true;
 
        for (int i = 1; i <= n; i++) {
            
 
 
            if (component[i] != component[p[i]]) {
                ok = false;
                break;
            }
        }
 
        cout << (ok ? "YES" : "NO") << '
';
    }
 
 
 
 
 
 
 
}
 
 
 
 
 