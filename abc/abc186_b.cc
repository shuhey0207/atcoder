#include <bits/stdc++.h>
using namespace std;

int main()
{
    int h,w,a;
    cin >> h >> w;

    int x = 100; // 0 <= A <= 100より
    int sum = 0;
    for(int i = 0; i < h*w; i++){
        cin >> a;
        x = min(x, a);
        sum += a;
    }

    cout << (sum - x * h * w) << endl;

    return 0;
}