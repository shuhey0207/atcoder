#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define rep(i,n) for(int i=0; i<(n);++i)
#define pb push_back
template<typename T> int max_index(vector<T>& v){auto mi = max_element(v.begin(), v.end()); return distance(v.begin(), mi);}
template<typename T> ll max_value(vector<T>& v){auto mi = max_element(v.begin(),v.end()); return (*mi);}

bool solve()
{
    int n;
    cin >> n;
    ll a = 0;
    vector<ll> b2a(n);
    rep(i,n) {
        ll aa,bb;
        cin >> aa >> bb;
        a += aa;
        b2a[i] = aa*2+bb;
    }
    sort(b2a.begin(), b2a.end());

    ll taka = 0;
    ll ans = 0;

    while(taka <= a){
        taka += b2a.back();
        b2a.pop_back();
        ans++;
    }

    cout << ans << endl;

    return true;
}

int main()
{
    solve();
    return 0;
}