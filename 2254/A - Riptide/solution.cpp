#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 
    int t;
    cin >> t;
 
    while (t--)
    {
        vector<int> v(3);
        cin >> v[0] >> v[1] >> v[2];
 
        int rounds = 0;
 
        while (true)
        {
            if (v[0] == v[1]||v[1] == v[2]||v[0] == v[2])
                break;
 
            int mx = max_element(v.begin(), v.end()) - v.begin();
            int mn = min_element(v.begin(), v.end()) - v.begin();
 
            v[mx]--;
            v[mn]++;
            rounds++;
 
        }
 
        cout << rounds << endl;
    }
 
 
}