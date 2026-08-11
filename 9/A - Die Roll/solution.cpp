#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int y , w ; cin >> y >> w;
    int want   = max(y,w) ;
    int no_of_values ;
    no_of_values = 7 - want ;
    int gcd = __gcd(no_of_values,6);
    int numerator = no_of_values/gcd ;
    int demomenator = 6/gcd;
    cout << numerator<<'/'<< demomenator << endl;
}