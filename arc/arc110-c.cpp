#pragma GCC optimize("Ofast")

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define pb push_back

bool solve()
{
    int n;
    cin >> n;
    vi p(n+1);
    vector<bool> done(n+1);
    for(int i = 1; i <= n; i++){
        cin >> p[i];
    }

    vi ans;

    for(int i = n; i > 0;--i){
        while(1){
            if(p[i]==i){
                // as is
                break;
            }
            for(int j = i; j > 0;j--){
                if(p[j]==i){
                    if(done[j]==true){
                        return false;
                    }
                    else{
                        int tmp = p[j+1];
                        p[j+1] = p[j];
                        p[j] = tmp;
                        ans.push_back(j);
                        done[j]=true;
                    }
                    break;
                }
            }

        }
    }

    if(ans.size() != (n-1)) return false;

    for(int i = 0; i < n-1; i++){
        cout << ans[i] << endl;
    }

    return true;
}

int main()
{
    if(solve()==false){
        cout << -1 << endl;
    }
    return 0;
}