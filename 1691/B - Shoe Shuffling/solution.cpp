#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
 
 
int main()
{
 
    int t;
    cin >> t;
 
    while (t--)
    {
 
        ll n;
        cin >> n;
 
        vector<ll> s(n);
 
        map<ll, ll> freq;
 
        for (ll i = 0; i < n; i++)
        {
            cin >> s[i];
            freq[s[i]]++;
        }
 
        bool anyUnique = false;
        for (auto m : freq)
        {
            if (m.second <= 1)
            {
                anyUnique = true;
                break;
            }
        }
 
        
 
 
 
        vector<ll> ansper(n);
        for (ll i = 0; i < n; i++)
        {
            ansper[i] = i + 1;
        }
 
        if (anyUnique)
        {
            cout << -1 << endl;
        }
        else
        {
            ll l = 0 , r = 0 ;
            while (r<n)
            {
                if(s[l]==s[r]){
                    r++;
                }
                else{
                    rotate(ansper.begin()+l, ansper.begin() +l + 1 , ansper.begin()+r);
                    l=r;
                }
            }
            rotate(ansper.begin()+l, ansper.begin() +l + 1 , ansper.begin()+r);
 
            for(auto i : ansper){
                cout << i << " " ;
            }
            cout << endl ;
            
 
        }
        
    }
}