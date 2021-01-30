#include <bits/stdc++.h>
using namespace std;

int n;
vi a(1000000);
 
int solve(int l ,int r){
    if(l < 0 || l >= r || r > n) return 0;
    auto min_itr = min_element(a.begin() + l, a.begin() + r); 
    int min_index = distance(a.begin(), min_itr);
    return max(max(solve(l, min_index), solve(min_index + 1, r)), (r-l) * (*min_itr));
}

int main()
{
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
 
    cout << solve(0, n) << endl;

    return 0;
}