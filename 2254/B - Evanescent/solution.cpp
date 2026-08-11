// #include <bits/stdc++.h>
// using namespace std;
 
// int main()
// {
 
//     int t;
//     cin >> t;
 
//     while (t--)
//     {
//         vector<int> v(3);
//         cin >> v[0] >> v[1] >> v[2];
 
//         int rounds = 0;
 
//         while (true)
//         {
//             if (v[0] == v[1]||v[1] == v[2]||v[0] == v[2])
//                 break;
 
//             int mx = max_element(v.begin(), v.end()) - v.begin();
//             int mn = min_element(v.begin(), v.end()) - v.begin();
 
//             v[mx]--;
//             v[mn]++;
//             rounds++;
 
//         }
 
//         cout << rounds << endl;
//     }
 
// }
 
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 
    int t;
    cin >> t;
 
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
 
        int runs = 1;
        for (int i = 1; i < n; i++){
            if (s[i] != s[i - 1])
                runs++;
        }
 
        int ans = INT_MAX;
 
        for (int i = 1; i <= n - 2; i++)
        {
            int b = (s[i - 1] != s[i]) + (s[i] != s[i + 1]);
            int a = (s[i - 1] != s[i + 1]);
            ans = min(ans, runs - b + a);
        }
 
        cout << ans << endl;
    }
 
   
}