#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,x;
    cin >> n >> x;

    int ans = 1;
    for(int i = 0; i < n; i++){
        int l;
        cin >> l;
        if((x -= l) < 0) break;
        ans++;
    }
    
    cout << ans << endl;
    return 0;
}
