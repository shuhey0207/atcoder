#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a,b,w;
    cin >> a >> b >> w;
    w*=1000;

    int mn = INT32_MAX;
    int mx = 0;
    for(int i = 1; i <= w; i++){
        if(w/i >= a && w/i <= b){
            mn = min(mn, i);
            mx = max(mx, i);
        }
    }

    if(mn == INT32_MAX) cout << "UNSATISFIABLE" << endl;
    else cout << mn << " " << mx << endl;
    return 0;
}