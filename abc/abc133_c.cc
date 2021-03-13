#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll l,r;
    const ll M = 2019;
    cin >> l >> r;
    ll ans = INT32_MAX;
    if(r-l+1 >= M){
        ans = 0;
    }
    else{
        for (ll i = l; i < r; i++){
            for (ll j = i+1; j <= r; j++){
                ans = min(ans, (i*j)%M);
            }
        }
    }

    cout << ans << endl;
    return 0;
}