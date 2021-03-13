#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,d;
    cin >> n >> d;
    vector<vector<int>> x(n, vector<int>(d));
    for (int i = 0; i < n; i++) for (int j = 0; j < d; j++){
        cin >> x[i][j];
    }

    int ans = 0;
    for (int i = 0; i < n; i++) for (int j = i+1; j < n; j++){
        int dist = 0;
        for(int k = 0; k < d; k++){
            dist += (x[i][k] - x[j][k]) * (x[i][k] - x[j][k]);
        }
        if(dist == ((int)sqrt(dist) * (int)sqrt(dist))){
            ans++;
        }
    }

    cout << ans << endl;
    return 0;
}