#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,q;
    cin >> n >> m >> q;
    vector<pair<int,int>> wv(n);
    vector<int> x(m);
    for(int i = 0; i < n; i++) cin >> wv[i].first >> wv[i].second;
    for(int i = 0; i < m; i++) cin >> x[i];

    sort(wv.begin(), wv.end(), [](auto l, auto r){
        if(l.second > r.second) return true;
        else if(l.second < r.second) return false;
        else  return (l.first < r.first);
    });
    
    for(int i = 0; i < q; i++){
        int l,r;
        cin >> l >> r;
        l--;r--;
        vector<int> tmp_x;
        for(int i = 0; i < m;i++){
            if(l <= i && i <= r) continue;
            tmp_x.push_back(x[i]);
        }
        vector<bool> done((int)tmp_x.size(), false);
        sort(tmp_x.begin(), tmp_x.end());
        int ans = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < (int)tmp_x.size(); j++){
                if(done[j]) continue;
                if(tmp_x[j] >= wv[i].first){
                    ans += wv[i].second;
                    done[j] = true;
                    break;
                }
            }
        }
        cout << ans << endl;
    }

    return 0;
}