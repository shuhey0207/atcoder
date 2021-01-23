#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,x;
    cin >> n >> x;
    x *= 100;

    int sum = 0;
    for(int i =0; i < n; i++){
        int v,p;
        cin >> v >> p;
        sum += v * p;
        if(x < sum){
            cout << i + 1 << endl;
            return 0;
        }
    }

    cout << -1 << endl;

    return 0;
}