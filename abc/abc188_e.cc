#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n,m;
    cin >> n >> m;
    vector<ll> a(n);
    vector<pair<ll,ll>> xy;
    vector<ll> mini(n,0);
    vector<ll> gain(n,LLONG_MIN);

    for(int i = 0; i < n; i++) {
        cin >> a[i];
        mini[i] = a[i];
    }
    for(int i = 0; i < m; i++){
        ll x,y;
        cin >> x >> y;
        x--;
        y--;
        xy.push_back(make_pair(x,y));
    } 

    sort(xy.begin(), xy.end());

    for(auto tmp : xy){
        if(a[tmp.second] - mini[tmp.first] > gain[tmp.second]){
            gain[tmp.second] = a[tmp.second] - mini[tmp.first];
            mini[tmp.second] = min(mini[tmp.first], a[tmp.second]);
        }
    }

    cout << *max_element(gain.begin(), gain.end()) << endl;

    return 0;
}