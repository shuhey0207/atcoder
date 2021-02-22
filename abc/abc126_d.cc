#include <bits/stdc++.h>
using namespace std;

struct Edge{
    int to,w;
    Edge(int to, int w):to(to), w(w){}
};

int main(){
    int n;
    cin >> n;
    vector<vector<Edge>> g(n);
    vector<int> ans(n, -1);

    for(int i = 0; i < n-1; i++){
        int u,v,w;
        cin >> u >> v >> w;
        u--;v--;
        g[u].emplace_back(v, w);
        g[v].emplace_back(u ,w);
    }

    ans[0] = 0;
    queue<int> que;
    que.push(0);
    while(!que.empty()){
        int cur = que.front(); que.pop();

        for(auto& e : g[cur]){
            if(ans[e.to] != -1) continue;
            if(e.w % 2 == 0) ans[e.to] = ans[cur];
            else ans[e.to] = 1 >> ans[cur];
            que.push(e.to);
        }
    }

    for(int i = 0; i < n; i++){
        cout << ans[i] << endl;
    }

    return 0;
}