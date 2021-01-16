#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll N,C;
    cin >> N >> C;
    vector<pair<ll ,ll>> tl;

    for(ll i = 0; i < N; i++){
        ll a,b,c;
        cin >> a >> b >> c;
        tl.push_back(make_pair(a,c));
        tl.push_back(make_pair(b+1,-c));
    }

    sort(tl.begin(), tl.end());

    ll ans = 0;
    ll sub = 0;
    ll prev = 0;
    for(auto e : tl){
        ans += min(sub, C) * (e.first - prev);
        sub += e.second;
        prev = e.first;
    }

    cout << ans << endl;

    return 0;
}