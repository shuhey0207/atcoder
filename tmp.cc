#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define rep(i,n) for(int i=0; i<(n);++i)

int n,m;
int b[90][90] = {0};
bool done[90][90] = {false};

int search(vector<vi>& t, int count, int x, int y){
    if(x < 0 || y < 0 || x >= n || y >= m) return 0;
    search(x, y + 1);
    search(x, y - 1);
    search(x + 1, y);
    search(x - 1, y);
}

bool solve()
{
    cin >> m >> n;
    
    rep(i, n) rep(j, m){
        cin >> b[i][j];
        if( ! b[i][j]) done[i][j] = true;
    }

    int ans = 0;
    rep(i, n) rep(j, m){
        ans = max(ans, search(b, 0, i, j));
    }

    cout << ans << endl;

    return true;
}

int main()
{
    solve();
    return 0;
}