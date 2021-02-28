#include <bits/stdc++.h>
using namespace std;

int main()
{
    int h,w;
    cin >> h >> w;
    vector<string> s(h);
    for(int i = 0; i < h; i++) cin >> s[i];
    vector<vector<int>> l(h, vector<int>(w));
    vector<vector<int>> r(h, vector<int>(w));
    vector<vector<int>> u(h, vector<int>(w));
    vector<vector<int>> d(h, vector<int>(w));

    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            if(s[i][j] == '#') l[i][j] = 0;
            else if(j==0) l[i][j] = 1;
            else l[i][j] = l[i][j-1] + 1;
        }
    }
    for(int i = 0; i < h; i++){
        for(int j = w-1; j >= 0; j--){
            if(s[i][j] == '#') r[i][j] = 0;
            else if(j==w-1) r[i][j] = 1;
            else r[i][j] = r[i][j+1] + 1;
        }
    }
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            if(s[i][j] == '#') u[i][j] = 0;
            else if(i==0) u[i][j] = 1;
            else u[i][j] = u[i-1][j] + 1;
        }
    }
    for(int i = h-1; i >= 0; i--){
        for(int j = 0; j < w; j++){
            if(s[i][j] == '#') d[i][j] = 0;
            else if(i==h-1) d[i][j] = 1;
            else d[i][j] = d[i+1][j] + 1;
        }
    }

    int ans = 0;
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            ans = max(ans, l[i][j] + r[i][j] + u[i][j] + d[i][j] - 3);
        }
    }
    
    cout << ans << endl;
    return 0;
}