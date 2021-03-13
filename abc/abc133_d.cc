#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    ll sum = accumulate(a.begin(), a.end(), 0LL);
    vector<ll> ans(n);
    ans[0] = sum;
    for(int i = 0; i < n; i++){
        if(i%2==1) ans[0] -= 2*a[i];
    }
    for(int i = 1; i < n; i++){
        ans[i] = 2 * a[i-1] - ans[i-1];
    }
    for(int i = 0; i < n; i++){
        cout << ans[i] << endl;
    }
    return 0;
}