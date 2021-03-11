#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ll a,b,c,d,cd;
    cin >> a >> b >> c >> d;
    cd = lcm(c,d);

    // B以下でCでもDでも割り切れないものの個数
    ll x = b - (b/c + b/d - b/cd);
    // A未満でCでもDでも割り切れないものの個数
    ll y = (a-1) - ((a-1)/c + (a-1)/d - (a-1)/cd);

    cout << x - y << endl;
    return 0;
}
