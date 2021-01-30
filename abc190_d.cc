#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector<pair<ll, ll> > prime_factorize(ll N) {
    vector<pair<ll, ll> > ret;
    for (ll a = 2; a * a <= N; ++a) {
        if (N % a != 0) continue;
        ll ex = 0;
        while (N % a == 0) {
            ++ex;
            N /= a;
        }

        ret.push_back({a, ex});
    }

    if (N != 1) ret.push_back({N, 1});
    return ret;
}

int main()
{
    ll n;
    cin >> n;
    auto tmp = prime_factorize(n);

    int ans = 2;
    for(auto& t : tmp){
        if(t.first%2 == 1){
            ans *= t.second + 1;
        }
    }

    cout << ans << endl;

    return 0;
}