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
        vector<ll> p(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> p[i];
        }
        // 3 pointer using
        // ll i = 0 ;
        // ll j = 1 ;
        // ll k = 2 ;
        // while(i!=n-3){
        //     if(p[j]>p[i] && p[j]>p[k]){
        //         cout << "YES" << endl ;
        //         cout << i+1 << " " << j+1 << " " << k+1 <<endl;
        //         break;
        //     }else{
        //         if(k==n-1){
        //             j++;
        //         }
        //         else if(j==n-1){
        //             i++;
        //         }
        //         k++ ;
        //     }
        //     if(i==n-3) cout << "NO" << endl ;
        // }
        bool yesprint = false;
        for (int i = 1; i < n - 1; i++)
        {
            if (p[i] > p[i - 1] && p[i] > p[i + 1])
            {
                cout << "YES" << endl ;
                cout << i << " " << i + 1 << " " << i + 2 << endl;
                yesprint = true ;
                break;
            }
        }
        if(yesprint == false) cout << "NO" << endl ;
    }
}