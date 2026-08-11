#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
int main()
{
    ll t;
    cin >> t;
 
    while (t--)
    {
 
        ll n;
        cin >> n;
 
        n--;
        ll msb = log2(n);
 
        vector<ll> ans;
 
        ll num = pow(2, msb) - 1;
        while (num >= 0)
        {
            ans.push_back(num);
            num--;
        }
        ll num2 = pow(2, msb);
        while (num2 <= n)
        {
            ans.push_back(num2);
            num2++;
        }
 
        for (ll a : ans)
        {
            cout << a << " ";
        }
        cout << endl;
    }
}