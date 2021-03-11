#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n;
    cin >> n;
    vector<ll> a(n);
    vector<ll> aa(n);
    vector<ll> sum(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
        aa[i] = a[i] * a[i];
        if(i==0) sum[i] = a[i];
        else sum[i] = sum[i-1] + a[i];
    }

    ll ans = 0;
    for(int i = 0; i < n; i++){
        ans += (n-1) * aa[i];
        ans -= 2 * (a[i] * (sum[n-1] - sum[i]));
    }

    cout << ans << endl;
    return 0;
}