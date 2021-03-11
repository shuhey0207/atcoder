#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<int> a(n);
    map<int, int> mp;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) mp[a[i]]++;
    set<int> s;
    for (int i = 0; i <= n; i++){
        if(mp.count(i) == 0) s.insert(i);
    }
    int ans = *s.begin();
    for (int i = 0; i < n - m; i++){
        mp[a[i]]--;
        if(mp[a[i]] == 0){
            s.insert(a[i]);
            mp.erase(a[i]);
        }
        if(mp.count(a[i + m]) == 0){
            s.erase(a[i + m]);
        }
        mp[a[i + m]]++;
        ans = min(ans, *s.begin());
    }

    cout << ans << endl;
    return 0;
}