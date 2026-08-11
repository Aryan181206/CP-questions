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
        string s;
        cin >> s;
 
        map<char, ll> freq;
        ll count = 0;
 
        vector<ll> distinct(n, 0);
        for (int i = 0; i < n; i++)
        {
            freq[s[i]]++;
            if (freq[s[i]] == 1)
            {
                count++;
            }
            distinct[i] = count;
        }
 
        ll sum = accumulate(distinct.begin(), distinct.end(), 0);
 
        cout << sum << endl;
    }
}