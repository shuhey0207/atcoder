#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n;
    cin >> n;
    vector<ll> a(n);
    vector<ll> b(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];

    ll ans = 0;
    ll amax = 0;
    for(int i = 0; i < n; i++){
        amax = max(amax, a[i]);
        if(ans < amax*b[i])
            ans = amax*b[i];
        cout << ans << endl;
    }

    return 0;
}