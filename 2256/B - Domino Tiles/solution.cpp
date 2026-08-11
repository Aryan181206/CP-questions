#include <bits/stdc++.h>
using namespace std;
 
#define ll long long 
const ll MOD = 998244353;
int main()
{
    int t; cin >> t;
 
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
 
        ll ans = 1;
        for (int p = 0; p < 2; p++)
        {
            int ways = 0;
            for (int f = 0; f <= 1; f++)
            {
                bool ok = true;
                for (int i = p; i < n; i += 2)
                {
                    int exp = f;
                    if ((i - p) / 2 % 2 == 1)
                    {
                        exp = 1 - f;
                    }
                    if (s[i] != '?' && s[i] - '0' != exp)
                    {
                      ok = false;
                      break;
                    }
                }
                if (ok)
                    ways++;
            }
            ans = ans* ways % MOD;
        }
        cout << ans << endl;
    }
}