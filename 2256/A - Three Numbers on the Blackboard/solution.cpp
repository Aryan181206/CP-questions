#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
int main()
{
 
    int t;
    cin >> t;
    while (t--)
    {
 
        vector<ll> a;
        ll a1, b, c;
        cin >> a1 >> b >> c;
        a.push_back(a1);
        a.push_back(b);
        a.push_back(c);
 
        ll n = 3;
        sort(a.begin(), a.end());
 
        ll range = LLONG_MAX;
 
        if (a[0] + a[1] > a[2])
        {
            // donot operation
            range = *max_element(a.begin(), a.end()) - *min_element(a.begin(), a.end());
 
            cout << range << endl;
        }
        else
        {
            // do operation
            a[2] = a[0] + a[1];
 
            range = *max_element(a.begin(), a.end()) - *min_element(a.begin(), a.end());
 
            cout << range << endl;
        }
    }
}