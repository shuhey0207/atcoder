#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    for(int i = 0; i < n; i++) cin >> a[i] >> b[i];

    int ans = INT32_MAX;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            ans = min(ans, (i == j) ? a[i] + b[j] : max(a[i], b[j]));
        }
    }

    cout << ans << endl;
    return 0;
}