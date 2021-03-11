#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<pair<int,int>> ab(n);
    for(int i = 0; i < n; i++) cin >> ab[i].first >> ab[i].second;
    sort(ab.begin(), ab.end(), [](auto& lhs, auto& rhs){return lhs.second < rhs.second;});

    int time = 0;
    bool yes = true;
    for(auto& x : ab){
        time += x.first;
        if(x.second < time) {
            yes = false;
            break;
        }
    }

    if(yes) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}