#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    double ans = 0;

    for(int i = 1; i <= n; i++){
        double b = 1;
        int x = i;
        while(x < k){
            x *= 2;
            b /= 2;
        }
        ans += b/n;
    }

    cout << setprecision(12) << ans << endl;

    return 0;
}