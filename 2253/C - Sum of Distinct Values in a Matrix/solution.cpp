#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
ll find(ll n, ll m, ll x, ll y, vector<int> &a, vector<int> &b)
{
    int p1 = 0, p2 = 0;
    int both = 0;
 
    ll ans = 0;
 
    while ((p1 < x || p2 < y) && p1 + p2 - both < n + m)
    {
       
        if (p1 == x || p1 - both >= n)
        {
            if (p2 == y || p2 - both >= m)
                break;
            ans += b[p2];
            p2++;
        }
        else if (p2 == y || p2 - both >= m)
        {
            if (p1 == x || p1 - both >= n)
                break;
            ans += a[p1];
            p1++;
        }
        else
        {
          
            if (a[p1] == b[p2])
            {
                ans += a[p1];
                both++;
                p1++;
                p2++;
            }
            else
            {
               
                if (a[p1] > b[p2])
                {
                    ans += a[p1];
                    p1++;
                }
                else
                {
                    ans += b[p2];
                    p2++;
                }
            }
        }
    }
    return ans;
}
 
void solve()
{
    int n, m, x, y;
    cin >> n >> m >> x >> y;
 
    vector<int> a(x);
    for (int i = 0; i < x; i++)
        cin >> a[i];
    vector<int> b(y);
    for (int i = 0; i < y; i++)
        cin >> b[i];
 
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
 
    ll ans = max(find(n - 1, m, x, y, a, b), find(n, m - 1, x, y, a, b));
    ans = max(find(n, 0, x, y, a, b), ans);
    ans = max(find(0, m, x, y, a, b), ans);
 
    cout << ans << endl;
}
 
int main()
{
 
    int t;
    cin >> t;
    while (t--)
        solve();
   
}