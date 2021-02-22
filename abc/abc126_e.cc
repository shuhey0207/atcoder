#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> a;
vector<int> visited;

bool search(int x){
    if(visited[x]) return false;
    visited[x] = true;
    for(auto e : a[x]) search(e);
    return true;
}

int main()
{
    int n,m;
    cin >> n >> m;
    a.resize(n);
    visited.resize(n);

    for(int i = 0; i < m; i++){
        int x,y,z;
        cin >> x >> y >> z;
        x--;y--;
        a[x].push_back(y);
        a[y].push_back(x);
    }

    int ans = 0;
    for(int i = 0; i < n; i++){
        if(search(i)) ans++;
    }
    
    cout << ans << endl;
    return 0;
}