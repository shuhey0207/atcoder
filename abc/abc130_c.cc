#include <bits/stdc++.h>
using namespace std;

int main()
{
    int w,h,x,y;
    cin >> w >> h >> x >> y;
    int ans = (x == w-x && y == h-y) ? 1 : 0;
    cout << setprecision(16) << (double)w*h/2 << " " << ans << endl;
    return 0;
}