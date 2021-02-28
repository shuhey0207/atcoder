#include <bits/stdc++.h>
using namespace std;

int main()
{
    const int MOD = 1000000007;
    int n,m;
    cin >> n >> m;
    unordered_set<int> a;
    vector<int> dp(n+1, 0);
    dp[0] = 1;

    for(int i = 0; i < m; i++){
        int tmp;
        cin >> tmp;
        a.insert(tmp);
    }

    int ans = 0;
    for(int i = 1; i <= n; i++){
        if(a.count(i)) continue;
        if(a.count(i-1) == 0) dp[i] += dp[i-1];
        if(a.count(i-2) == 0) dp[i] += dp[i-2];
        dp[i] %= MOD;
    }
    
    cout << dp[n] << endl;
    return 0;
}