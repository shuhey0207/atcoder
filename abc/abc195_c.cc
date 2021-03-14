#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long

ll powll(ll x, ll n){
    ll ret = x;
    for(ll i = 0; i < n; i++) ret *= x;
    return ret;
}

int main()
{
    ll n;
    cin >> n;
    ll ans = 0;
    for(ll i = 0; i < 6; ++i){
        ll p = powll(1000, i) - 1;
        if(n > p) ans += n - p;
    }
    
    cout << ans << endl;
    return 0;
}