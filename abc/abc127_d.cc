#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n,m;
    cin >> n >> m;
    vector<ll> dst(n);
    vector<pair<ll,ll>> bc(m);

    for(int i = 0; i < n; i++){
        cin >> dst[i];
    }

    for(int i = 0; i < m; i++){
        cin >> bc[i].second >> bc[i].first;
    }

    sort(dst.begin(), dst.end());
    sort(bc.begin(), bc.end(), greater<pair<ll,ll>>{});

    vector<ll> src(n, 0);
    [&](){
        ll count = 0;
        for(auto x : bc){
            for(int i = 0; i < x.second; i++){
                src[count] = x.first;
                count++;
                if(count == n) return;
            }
        }
    }();

    ll ans = 0;
    for(int i = 0; i < n; i++){
        ans += max(dst[i], src[i]);
    }

    cout << ans << endl;
    return 0;
}