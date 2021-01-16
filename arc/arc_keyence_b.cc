#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,n,k;
    cin >> n >> k;
    vector<int> pool(n, 0);
    for(int i = 0; i < n; i++){
        cin >> a;
        pool[a] += 1;
    }
    int ans = 0;
    for(int i = 0; i < n; i++){
        k = min(k, pool[i]);
        ans += k;
    }
    cout << ans << endl;
    
    return 0;
}