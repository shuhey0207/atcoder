#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    int max_l = 0;
    int min_r = INT32_MAX;

    for(int i = 0; i < m; i++){
        int l,r;
        cin >> l >> r;
        max_l = max(max_l, l);
        min_r = min(min_r, r);
    }

    cout << max(0, min_r - max_l + 1) << endl;
    return 0;
}