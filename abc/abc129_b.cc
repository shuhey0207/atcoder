#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> w(n);
    for(int i = 0; i < n; i++) cin >> w[i];

    int ans = INT32_MAX;
    for(int i = 0; i < n; i++){
        int s1  = accumulate(w.begin(), w.begin() + i, 0);
        int s2  = accumulate(w.begin() + i, w.end(), 0);
        ans = min(ans, abs(s1-s2));
    }

    cout << ans << endl;
    return 0;
}