#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin >> n >> k;
    vector<int> v(n);

    for(int i = 0; i < n; i++){
        cin >> v[i];
    } 

    int ans = 0;
    for(int a = 0; a <= min(k,n); a++){
        for(int b = 0; b <= min(k,n) - a; b++){
            vector<int> mine;
            for(auto itr = v.begin(); itr != v.begin() + a; itr++){
                mine.push_back(*itr);
            }
            for(auto itr = v.rbegin(); itr != v.rbegin() + b; itr++){
                mine.push_back(*itr);
            }

            sort(mine.begin(), mine.end(), greater<int>{});
            int rest_k = k - a - b;
            while( !mine.empty() && rest_k != 0 && mine.back() <= 0){
                mine.pop_back();
                rest_k--;
            }
            
            int mine_sum = 0;
            for(auto& x : mine){
                mine_sum += x;
            }
            ans = max(ans, mine_sum);
        }
    }

    cout << ans << endl;
    return 0;
}