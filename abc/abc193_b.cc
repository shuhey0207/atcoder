#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int ans = INT32_MAX;
    for(int i = 0; i < n; i++){
        int a,p,x;
        cin >> a >> p >> x;
        if(a < x){
            ans = min(ans, p);
        }
    }

    if(ans == INT32_MAX){
        cout << -1 << endl;
    }
    else{
        cout << ans << endl;
    }

    return 0;
}