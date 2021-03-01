#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n,k;
    cin >> n >> k;
    vector<ll> a(n+1);
    vector<ll> sum(n+1, 0);
    for(int i = 0; i < n; i++){
        cin >> a[i+1];
        if(i==0) sum[1] = a[1];
        else sum[i+1] = sum[i] + a[i+1];
    } 

    ll ans = 0;
    for(ll i = 1; i <= n; i++){
        ll l = i-1;
        ll r = n+1;
        while(r-l>1){
            ll x = l + (r-l)/2;
            if(sum[x] - sum[i-1] >= k){
                r = x;
            }
            else l = x;
        }
        ans += n - r + 1;
    }

    cout << ans << endl;
    return 0;
}