#pragma GCC optimize("Ofast")

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define pb push_back

bool solve()
{
    ll max = 10000000000000;
    ll n;
    cin >> n;

    ll ans = 1;

    for(ll  i = 2; i <= n; i++){
        ans = lcm(ans,i);
    }

    cout << ans + 1 << endl;

    return true;
}

int main()
{
    solve();
    return 0;
}